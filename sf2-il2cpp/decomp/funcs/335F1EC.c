// NFNBHPOJFNJ$$JGMKDPHEEIK @ RVA 0x335F1EC

void NFNBHPOJFNJ__JGMKDPHEEIK
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *PINADELACMD,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *a_01;
  System_Action_o *CPECAEHDDDB;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567a6f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_NCJEFECMBFC__);
    FUN_01bab630(&StringLiteral_19983);
    FUN_01bab630(&StringLiteral_17601);
    DAT_04567a6f = 1;
  }
  if (LKFALEIFDIO) {
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345f378:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      a_00 = (SimpleJSON_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,StringLiteral_17601,(a->klass->vtable)._7_get_Item.method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar1 = SimpleJSON_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,StringLiteral_17601,(a->klass->vtable)._7_get_Item.method);
        if (plVar2 == (long *)0x0) goto LAB_0345f378;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983,(MethodInfo *)0x0);
        if (bVar1) {
          NFNBHPOJFNJ__BGILDFBAMNI(__this,method_00);
          CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          method_01 = Method_NFNBHPOJFNJ_NCJEFECMBFC__;
          System_Action___ctor();
          NFNBHPOJFNJ__NCCONOPIKDD(__this_00,CPECAEHDDDB,method_01);
          return;
        }
      }
    }
  }
  return;
}

