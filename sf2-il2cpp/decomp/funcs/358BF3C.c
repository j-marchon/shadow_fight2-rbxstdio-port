// PADDODJLLFJ$$DIGLGKAPOAB @ RVA 0x358BF3C

void PADDODJLLFJ__DIGLGKAPOAB(PADDODJLLFJ_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  GBJGJEGPHKD_o *__this_00;
  IEFEBEDLHNN_o *pIVar3;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  Il2CppClass *pIVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04568d49 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8675);
    DAT_04568d49 = 1;
  }
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0368c0f0;
  bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  pIVar6 = IMMNELPBGIF[3].klass;
  if (pIVar6 != (Il2CppClass *)0x0) {
    (__this->fields).EAMLBCJEKDF = *(float *)&(pIVar6->_1).element_class * -0.5;
    (__this->fields).DLJPCGPGONK = -(float)(pIVar6->_1).this_arg.bits;
  }
  iVar1 = (__this->fields).super.super.JGJNBILDCHK;
  if (iVar1 == 2) {
    pIVar6 = IMMNELPBGIF[1].klass;
joined_r0x0368c024:
    if (pIVar6 != (Il2CppClass *)0x0) {
      __this_00 = (GBJGJEGPHKD_o *)pIVar6->vtable[0x11].method;
      if (__this_00 == (GBJGJEGPHKD_o *)0x0) goto LAB_0368c0f0;
      pIVar3 = GBJGJEGPHKD__OCJAHBKIFNO(__this_00,(__this->fields).PCNGAEBMNDH,(MethodInfo *)0x0);
      (__this->fields).HJKLIDCAEOE = pIVar3;
      thunk_FUN_01c20e04();
    }
  }
  else if (iVar1 == 1) {
    pIVar6 = IMMNELPBGIF[1].monitor;
    goto joined_r0x0368c024;
  }
  if ((__this->fields).HJKLIDCAEOE != (IEFEBEDLHNN_o *)0x0) {
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    pSVar7 = (__this->fields).PCNGAEBMNDH;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar7;
      thunk_FUN_01c20e04(args->m_Items,pSVar7);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_8675,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0368c0f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

