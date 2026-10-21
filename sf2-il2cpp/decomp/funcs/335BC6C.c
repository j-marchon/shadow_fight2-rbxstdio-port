// NFNBHPOJFNJ$$ALHPEKDJCOJ @ RVA 0x335BC6C

void NFNBHPOJFNJ__ALHPEKDJCOJ
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *PINADELACMD,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *a_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567a57 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 0345bca4 to 0355bcab has its CatchHandler @ 0345bdd4 */
    FUN_01bab630(&StringLiteral_19983);
    FUN_01bab630(&StringLiteral_17601);
    DAT_04567a57 = 1;
  }
  if (LKFALEIFDIO) {
                    /* try { // try from 0345bcc8 to 0355bccb has its CatchHandler @ 0345bdc0 */
                    /* try { // try from 0345bccc to 0355bcdb has its CatchHandler @ 0345bdd0 */
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
                    /* try { // try from 0345bcf0 to 0355bcf7 has its CatchHandler @ 0345bdc8 */
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345bdb8:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdb4 with catch @ 0345bdb8
                       try { // try from 0345bdb8 to 0355bdeb has its CatchHandler @ 0345b930 */
        FUN_01bab8c8();
      }
                    /* try { // try from 0345bd08 to 0355bd0f has its CatchHandler @ 0345bdbc */
                    /* try { // try from 0345bd10 to 0355bdab has its CatchHandler @ 0345b930 */
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
        if (plVar2 == (long *)0x0) goto LAB_0345bdb8;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        method_01 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983,(MethodInfo *)0x0);
        if (bVar1) {
          NFNBHPOJFNJ__CFPENDINBDI((NFNBHPOJFNJ_o *)0x1,PINADELACMD,method_01);
          NFNBHPOJFNJ__EAOLEKCDMCM(__this,method_00);
          return;
        }
      }
    }
  }
                    /* try { // try from 0345bdac to 0355bdaf has its CatchHandler @ 0345bdcc */
                    /* try { // try from 0345bdb0 to 0355bdb3 has its CatchHandler @ 0345bdc4 */
                    /* try { // try from 0345bdb4 to 0355bdb7 has its CatchHandler @ 0345bdb8 */
  return;
}

