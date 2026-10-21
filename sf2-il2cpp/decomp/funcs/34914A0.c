// Nekki.SF2.GUI.UIModule$$.cctor @ RVA 0x34914A0

/* WARNING: Control flow encountered unimplemented instructions */

void Nekki_SF2_GUI_UIModule___cctor(MethodInfo *method)

{
  System_Action_UIModule__o *pSVar1;
  System_Action_UIModule__o **ppSVar2;
  System_Collections_Generic_List_UIModule__o *__this;
  System_Collections_Generic_List_UIModule__o **ppSVar3;
  
  if ((DAT_0456841f & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* try { // try from 03591534 to 0369153b has its CatchHandler @ 03591644 */
                    /* try { // try from 03591550 to 03691557 has its CatchHandler @ 0359163c */
  if ((Nekki_SF2_GUI_UIModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03591570 to 03691577 has its CatchHandler @ 035915b0 */
  pSVar1 = (System_Action_UIModule__o *)thunk_FUN_01bda818(System_Action<UIModule>_TypeInfo);
                    /* try { // try from 03591584 to 0369158f has its CatchHandler @ 035915ac */
  System_Action<object>___ctor();
  Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated = pSVar1;
                    /* try { // try from 0359159c to 036915a3 has its CatchHandler @ 03591640 */
                    /* try { // try from 035915a4 to 036915bf has its CatchHandler @ 03591400 */
  thunk_FUN_01c20e04(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,pSVar1);
                    /* catch() { ... } // from try @ 03591584 with catch @ 035915ac */
                    /* catch() { ... } // from try @ 03591570 with catch @ 035915b0 */
  pSVar1 = (System_Action_UIModule__o *)thunk_FUN_01bda818(System_Action<UIModule>_TypeInfo);
                    /* try { // try from 035915c0 to 036915c3 has its CatchHandler @ 03591628 */
                    /* try { // try from 035915c4 to 036915fb has its CatchHandler @ 03591400 */
  System_Action<object>___ctor();
  ppSVar2 = &Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
                    /* try { // try from 035915fc to 03691617 has its CatchHandler @ 035916a0 */
  ppSVar3 = &Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  *ppSVar3 = __this;
                    /* try { // try from 03591618 to 0369161b has its CatchHandler @ 03591638 */
                    /* try { // try from 0359161c to 03691623 has its CatchHandler @ 03591634 */
  thunk_FUN_01c20e04(ppSVar3,__this);
  return;
}

