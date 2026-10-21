// IKCANHIFLGJ$$NOLANIBGHDH @ RVA 0x35C1134

System_String_o *
IKCANHIFLGJ__NOLANIBGHDH
          (IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,bool *EJMPOFKGOJL,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  IKCANHIFLGJ_o *__this_00;
  MethodInfo *method_00;
  System_String_array *pSVar5;
  
  method_00 = (MethodInfo *)EJMPOFKGOJL;
  if ((DAT_04568f1b & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568f1b = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    __this_00 = (IKCANHIFLGJ_o *)
                (*(KGLJICLJHEL->klass->vtable)._2_GetHashCode.methodPtr)
                          (KGLJICLJHEL,(KGLJICLJHEL->klass->vtable)._2_GetHashCode.method);
    uVar3 = (uint)__this_00;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      __this_00 = (IKCANHIFLGJ_o *)thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    bVar4 = IKCANHIFLGJ__NEHFPNBCOLO(__this_00,KGLJICLJHEL,method_00);
    if ((bVar4) || ((__this->fields).PBMOPGPGINM <= (int)(uVar1 % 100))) {
      *EJMPOFKGOJL = false;
    }
    else {
      *EJMPOFKGOJL = true;
      pSVar5 = (__this->fields).IJAMBHAFPIE;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_036c1220;
      uVar3 = (uint)pSVar5->max_length;
      iVar2 = 0;
      if (uVar3 != 0) {
        iVar2 = (int)uVar1 / (int)uVar3;
      }
      uVar1 = uVar1 - iVar2 * uVar3;
      if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      KGLJICLJHEL = pSVar5->m_Items[uVar1];
    }
    return KGLJICLJHEL;
  }
LAB_036c1220:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

