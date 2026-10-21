// ONEDJCACCGM$$AALJIKGFNIL @ RVA 0x31DDD30

void ONEDJCACCGM__AALJIKGFNIL
               (SimpleJSON_JSONObject_o *IMMNELPBGIF,System_String_o *LPKODEJMJBB,MethodInfo *method
               )

{
  long *plVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04566d36 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_21419);
    DAT_04566d36 = 1;
  }
  if (IMMNELPBGIF != (SimpleJSON_JSONObject_o *)0x0) {
    plVar1 = (long *)(*(IMMNELPBGIF->klass->vtable)._7_get_Item.methodPtr)
                               (IMMNELPBGIF,StringLiteral_21419,
                                (IMMNELPBGIF->klass->vtable)._7_get_Item.method);
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar2 = SimpleJSON_JSONNode__op_Implicit(LPKODEJMJBB,(MethodInfo *)0x0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,pSVar2,*(undefined8 *)(*plVar1 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x032dde0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(IMMNELPBGIF->klass->vtable)._8_set_Item.methodPtr)
                  (IMMNELPBGIF,StringLiteral_21419,plVar1,
                   (IMMNELPBGIF->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

