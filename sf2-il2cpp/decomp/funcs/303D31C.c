// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$GIENGNEGHPJ @ RVA 0x303D31C

void Nekki_SF2_GUI_DebugModules_ModelDebugUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
                    /* try { // try from 0313d324 to 0323d36f has its CatchHandler @ 0313d134 */
                    /* catch() { ... } // from try @ 0313d268 with catch @ 0313d328 */
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313d308 with catch @ 0313d32c */
  pUVar1 = (__this->fields)._EnemyAnimName;
                    /* catch() { ... } // from try @ 0313d2a8 with catch @ 0313d330 */
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* catch() { ... } // from try @ 0313d224 with catch @ 0313d334 */
                    /* catch() { ... } // from try @ 0313d29c with catch @ 0313d338 */
                    /* catch() { ... } // from try @ 0313d21c with catch @ 0313d33c */
                    /* catch() { ... } // from try @ 0313d284 with catch @ 0313d340
                       catch() { ... } // from try @ 0313d318 with catch @ 0313d340 */
                    /* catch() { ... } // from try @ 0313d20c with catch @ 0313d344 */
    (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar1,0,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
                    /* catch() { ... } // from try @ 0313d1fc with catch @ 0313d348 */
    pUVar1 = (__this->fields)._PlayerAnimName;
                    /* catch() { ... } // from try @ 0313d1f4 with catch @ 0313d34c */
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* catch() { ... } // from try @ 0313d1f0 with catch @ 0313d350 */
                    /* catch() { ... } // from try @ 0313d1d0 with catch @ 0313d354 */
                    /* catch() { ... } // from try @ 0313d248 with catch @ 0313d358
                       catch() { ... } // from try @ 0313d310 with catch @ 0313d358 */
                    /* WARNING: Could not recover jumptable at 0x0313d364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar1,0,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

