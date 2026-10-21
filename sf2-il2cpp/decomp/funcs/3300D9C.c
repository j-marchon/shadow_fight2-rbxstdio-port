// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FKEGLMMHKEO @ RVA 0x3300D9C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FKEGLMMHKEO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
                    /* catch() { ... } // from try @ 03400d10 with catch @ 03400d9c
                       catch() { ... } // from try @ 03400d78 with catch @ 03400d9c */
                    /* try { // try from 03400da4 to 03500daf has its CatchHandler @ 03400728 */
                    /* catch() { ... } // from try @ 03400b9c with catch @ 03400dac
                       catch() { ... } // from try @ 03400c90 with catch @ 03400dac
                       catch() { ... } // from try @ 03400d88 with catch @ 03400dac */
                    /* try { // try from 03400db0 to 03501083 has its CatchHandler @ 03400db0
                       catch() { ... } // from try @ 03400db0 with catch @ 03400db0
                       catch() { ... } // from try @ 034012d8 with catch @ 03400db0
                       catch() { ... } // from try @ 03401398 with catch @ 03400db0
                       catch() { ... } // from try @ 034013a0 with catch @ 03400db0
                       catch() { ... } // from try @ 03401498 with catch @ 03400db0 */
  if ((DAT_0456771d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456771d = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

