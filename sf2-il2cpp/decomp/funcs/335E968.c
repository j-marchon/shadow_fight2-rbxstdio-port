// NFNBHPOJFNJ$$OJNHHOGCKAM @ RVA 0x335E968

void NFNBHPOJFNJ__OJNHHOGCKAM
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
  
  if ((DAT_04567a61 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_IHHNIMJDIHE__);
    FUN_01bab630(&StringLiteral_19983);
    FUN_01bab630(&StringLiteral_17601);
    DAT_04567a61 = 1;
  }
                    /* try { // try from 0345e9d0 to 0355e9f7 has its CatchHandler @ 0345ef40 */
  if (LKFALEIFDIO) {
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345eaec:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0345ea2c to 0355ea57 has its CatchHandler @ 0345ef3c */
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
        if (plVar2 == (long *)0x0) goto LAB_0345eaec;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* try { // try from 0345ea94 to 0355ea9b has its CatchHandler @ 0345ef38 */
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 0345eaa4 to 0355eaab has its CatchHandler @ 0345ef30 */
          CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          method_00 = Method_NFNBHPOJFNJ_IHHNIMJDIHE__;
                    /* try { // try from 0345eab4 to 0355eabb has its CatchHandler @ 0345ef28 */
                    /* try { // try from 0345eac0 to 0355eac7 has its CatchHandler @ 0345ef34 */
          System_Action___ctor();
                    /* try { // try from 0345ead0 to 0355ead7 has its CatchHandler @ 0345ef10 */
                    /* try { // try from 0345ead8 to 0355eaeb has its CatchHandler @ 0345ef0c */
          NFNBHPOJFNJ__NCCONOPIKDD(__this_00,CPECAEHDDDB,method_00);
          return;
        }
      }
    }
  }
  return;
}

