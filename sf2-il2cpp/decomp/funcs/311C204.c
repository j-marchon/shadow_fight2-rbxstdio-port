// NAKKKCKOHGH$$DIGLGKAPOAB @ RVA 0x311C204

void NAKKKCKOHGH__DIGLGKAPOAB(NAKKKCKOHGH_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Il2CppClass *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  int32_t local_24;
  
  if ((DAT_045665f1 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11203);
    DAT_045665f1 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  iVar1 = (__this->fields).super.JGJNBILDCHK;
  if (iVar1 == 2) {
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0321c394;
    __this_00 = IMMNELPBGIF[1].klass;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).super.JGJNBILDCHK;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
      if (args != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items,pIVar3);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_11203,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0321c394;
    }
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0321c394;
    __this_00 = IMMNELPBGIF[1].monitor;
  }
  if (__this_00 != (Il2CppClass *)0x0) {
    OLKKAIFGGAK__BGJNOONKFCH
              ((OLKKAIFGGAK_o *)__this_00,*(int32_t *)&(__this->fields).super.field_0x5c,
               (MethodInfo *)0x0);
    return;
  }
LAB_0321c394:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

