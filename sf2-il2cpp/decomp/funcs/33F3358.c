// FCJBEKHDLAF$$IKKHECKCEJC @ RVA 0x33F3358

bool FCJBEKHDLAF__IKKHECKCEJC
               (FCJBEKHDLAF_o *__this,int32_t HEHMPFLAEGE,float FBJKLOAFMDP,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  OLKKAIFGGAK_o **ppOVar5;
  int32_t local_24;
  
  if ((DAT_04567f30 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6330);
    DAT_04567f30 = 1;
  }
  if (HEHMPFLAEGE == 2) {
    ppOVar5 = &(__this->fields).CLEKIBBCAOJ;
  }
  else {
    if (HEHMPFLAEGE != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = HEHMPFLAEGE;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items,pIVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_6330,args,(MethodInfo *)0x0);
        return false;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ppOVar5 = &(__this->fields).LAMENNMGPBN;
  }
  bVar1 = FCJBEKHDLAF__IKKHECKCEJC(__this,*ppOVar5,FBJKLOAFMDP,method);
  return bVar1;
}

