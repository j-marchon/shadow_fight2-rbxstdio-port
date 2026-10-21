// InControl.VersionInfo$$GetHashCode @ RVA 0x316FA14

int32_t InControl_VersionInfo__GetHashCode(InControl_VersionInfo_o __this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int32_t __this_00;
  
  __this_00 = __this.fields.Major;
  uVar1 = System_Int32__GetHashCode(__this_00,(MethodInfo *)0x0);
  uVar2 = System_Int32__GetHashCode(__this_00 + 4,(MethodInfo *)0x0);
  uVar3 = System_Int32__GetHashCode(__this_00 + 8,(MethodInfo *)0x0);
  uVar4 = System_Int32__GetHashCode(__this_00 + 0xc,(MethodInfo *)0x0);
  return uVar2 ^ uVar1 ^ uVar3 ^ uVar4;
}

