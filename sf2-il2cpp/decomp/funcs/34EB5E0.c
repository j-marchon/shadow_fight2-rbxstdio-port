// OLKKAIFGGAK$$FDDFPMCLCGM @ RVA 0x34EB5E0

void OLKKAIFGGAK__FDDFPMCLCGM(OLKKAIFGGAK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  int32_t local_24;
  
  if ((DAT_045687ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15014);
    DAT_045687ca = 1;
  }
  if (1 < (uint)CJNHFNHJHPE) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = CJNHFNHJHPE;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_15014,args,(MethodInfo *)0x0);
  }
  CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).ILPEKKGEAEK.fields = CVar4;
  return;
}

