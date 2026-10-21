// LEGDPJHPEOB$$NJLKHFHAAHH @ RVA 0x354A220

bool LEGDPJHPEOB__NJLKHFHAAHH
               (LEGDPJHPEOB_o *__this,System_String_o *OMNMKNMLLMF,System_String_o *KLEPJKBIGPK,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  switch((__this->fields).ACCIHBHMFPN) {
  case 1:
    bVar1 = System_String__op_Equality(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    return bVar1;
  case 2:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = 0 < iVar2;
    break;
  case 3:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = (bool)((byte)~(byte)((uint)iVar2 >> 0x18) >> 7);
    break;
  case 4:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
    break;
  case 5:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
    break;
  default:
    bVar1 = false;
  }
  return bVar1;
}

