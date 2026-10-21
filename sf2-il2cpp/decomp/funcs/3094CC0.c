// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TryCallEvent @ RVA 0x3094CC0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TryCallEvent
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,System_String_o *GJKJICHICFN,
               MethodInfo *method)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 03194c5c with catch @ 03194cc0 */
                    /* catch() { ... } // from try @ 031949b0 with catch @ 03194cc4 */
                    /* catch() { ... } // from try @ 031949e0 with catch @ 03194cc8 */
                    /* catch() { ... } // from try @ 03194a20 with catch @ 03194ccc */
  if ((DAT_045660c7 & 1) == 0) {
                    /* try { // try from 03194ce8 to 03294ceb has its CatchHandler @ 03194e2c */
                    /* try { // try from 03194cec to 03294dcf has its CatchHandler @ 03194474 */
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<FBBNEILNOKK>__);
    DAT_045660c7 = 1;
  }
  uVar1 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                    (GJKJICHICFN,1,Method_PCOEHCPGBBG_AICKIDLLIBK<FBBNEILNOKK>__);
                    /* WARNING: Could not recover jumptable at 0x03194d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._10_TryCallEvent.methodPtr)
            (__this,(ulong)uVar1,(__this->klass->vtable)._10_TryCallEvent.method);
  return;
}

