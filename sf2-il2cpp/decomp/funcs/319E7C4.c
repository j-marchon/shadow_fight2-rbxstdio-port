// <PrivateImplementationDetails>$$ComputeStringHash @ RVA 0x319E7C4

uint32_t <PrivateImplementationDetails>__ComputeStringHash(System_String_o *s,MethodInfo *method)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int index;
  
  if (s == (System_String_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    if (0 < (s->fields)._stringLength) {
      index = 0;
      do {
        uVar1 = System_String__get_Chars(s,index,(MethodInfo *)0x0);
        index = index + 1;
        uVar2 = (uVar2 ^ uVar1) * 0x1000193;
      } while (index < (s->fields)._stringLength);
    }
  }
  return uVar2;
}

