// Nekki.SF2.GUI.UIModule$$OnDestroy @ RVA 0x34912D8

void Nekki_SF2_GUI_UIModule__OnDestroy(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_UIModule_c *pNVar1;
  
                    /* try { // try from 035912e0 to 036912e7 has its CatchHandler @ 03591390 */
                    /* try { // try from 035912e8 to 0369130b has its CatchHandler @ 0359112c */
  if ((DAT_0456841d & 1) == 0) {
                    /* catch() { ... } // from try @ 035912c0 with catch @ 035912f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Remove__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
                    /* try { // try from 0359130c to 0369130f has its CatchHandler @ 03591378 */
    DAT_0456841d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03591310 to 03691343 has its CatchHandler @ 0359112c */
  if ((__this->fields).__IsReleased_k__BackingField == false) {
    pNVar1 = __this->klass;
    (__this->fields).__IsReleased_k__BackingField = true;
    (*(pNVar1->vtable)._6_CLNAOMIIBLH.methodPtr)(__this,(pNVar1->vtable)._6_CLNAOMIIBLH.method);
    method = extraout_x1_00;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03591344 to 03691347 has its CatchHandler @ 03591398 */
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
                    /* try { // try from 03591348 to 0369134b has its CatchHandler @ 0359112c */
  }
                    /* try { // try from 0359134c to 03691353 has its CatchHandler @ 0359138c */
  __this_00 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
                    /* try { // try from 03591354 to 03691357 has its CatchHandler @ 03591388 */
  if (__this_00 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                    /* try { // try from 03591360 to 03691377 has its CatchHandler @ 035913fc */
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<UIModule>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

