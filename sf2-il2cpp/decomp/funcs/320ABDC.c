// FPMAFHGLPOB$$OJPDBFFOABF @ RVA 0x320ABDC

void FPMAFHGLPOB__OJPDBFFOABF
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *IKKKILCDMMB,MethodInfo *method
               )

{
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar1;
  
  if ((DAT_04566e74 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
                    /* try { // try from 0330ac14 to 0340ac1b has its CatchHandler @ 0330ac58 */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e74 = 1;
  }
                    /* try { // try from 0330ac24 to 0340ac2b has its CatchHandler @ 0330ac54 */
                    /* try { // try from 0330ac2c to 0340ac6f has its CatchHandler @ 0330ab80 */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  s = UnityEngine_Application__get_identifier((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ac24 with catch @ 0330ac54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ac14 with catch @ 0330ac58
                        */
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* try { // try from 0330ac70 to 0340ac73 has its CatchHandler @ 0330ac94 */
                    /* try { // try from 0330ac74 to 0340ac9b has its CatchHandler @ 0330ab80 */
                    /* WARNING: Could not recover jumptable at 0x0330ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._20_Add.methodPtr)
              (JHMENEKPIBO,IKKKILCDMMB,pSVar1,(JHMENEKPIBO->klass->vtable)._20_Add.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0330ac70 with catch @ 0330ac94 */
  FUN_01bab8c8();
}

