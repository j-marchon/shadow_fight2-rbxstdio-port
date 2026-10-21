// Nekki.SF2.GUI.Map.IRaidKeysView$$RemoveAllKeys @ RVA 0x32B7CDC

void Nekki_SF2_GUI_Map_IRaidKeysView__RemoveAllKeys
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_NPKKNCCEIND__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567465 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_Clear__);
    DAT_04567465 = 1;
  }
  pSVar1 = (__this->fields).ADHBPAAHOKK;
  if (pSVar1 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x033b7d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._4_unknown.methodPtr)
              (__this,(__this->klass->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

