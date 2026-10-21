// Nekki.SF2.GUI.Map.IRaidKeysView$$UpdateKeys @ RVA 0x32B7E14

void Nekki_SF2_GUI_Map_IRaidKeysView__UpdateKeys
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,
               System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  System_Collections_Generic_List_NPKKNCCEIND__o **ppSVar1;
  
  Nekki_SF2_GUI_Map_IRaidKeysView__RemoveAllKeys(__this,(MethodInfo *)IFFLAAMFALK);
  ppSVar1 = &(__this->fields).ADHBPAAHOKK;
  *ppSVar1 = IFFLAAMFALK;
  thunk_FUN_01c20e04(ppSVar1,IFFLAAMFALK);
  (*(__this->klass->vtable)._8_unknown.methodPtr)(__this,(__this->klass->vtable)._8_unknown.method);
                    /* WARNING: Could not recover jumptable at 0x033b7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_unknown.methodPtr)(__this,(__this->klass->vtable)._5_unknown.method);
  return;
}

