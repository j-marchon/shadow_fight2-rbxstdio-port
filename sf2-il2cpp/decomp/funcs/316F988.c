// InControl.VersionInfo$$Equals @ RVA 0x316F988

bool InControl_VersionInfo__Equals
               (InControl_VersionInfo_o __this,Il2CppObject *other,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int32_t iVar4;
  undefined8 *puVar5;
  MethodInfo *in_x4;
  InControl_VersionInfo_o __this_00;
  InControl_VersionInfo_o other_00;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar5 = __this.fields._8_8_;
  if ((DAT_04566912 & 1) == 0) {
    FUN_01bab630(&InControl_VersionInfo_TypeInfo);
    DAT_04566912 = 1;
  }
  if ((puVar5 == (undefined8 *)0x0) ||
     ((InControl_VersionInfo_c *)*puVar5 != InControl_VersionInfo_TypeInfo)) {
    bVar3 = false;
  }
  else {
    uVar1 = *__this.fields._0_8_;
    uVar2 = __this.fields._0_8_[1];
    puVar5 = (undefined8 *)thunk_FUN_01bda96c(puVar5);
    __this_00.fields._8_8_ = *puVar5;
    __this_00.fields._0_8_ = &local_30;
    other_00.fields._8_8_ = method;
    other_00.fields._0_8_ = puVar5[1];
    local_30 = uVar1;
    uStack_28 = uVar2;
    iVar4 = InControl_VersionInfo__CompareTo(__this_00,other_00,in_x4);
    bVar3 = iVar4 == 0;
  }
  return bVar3;
}

