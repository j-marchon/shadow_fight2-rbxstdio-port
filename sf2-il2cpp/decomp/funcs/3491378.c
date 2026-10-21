// Nekki.SF2.GUI.UIModule$$GetModuleByName @ RVA 0x3491378

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_UIModule__GetModuleByName(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  Nekki_SF2_GUI_UIModule_o *pNVar2;
  System_Collections_Generic_List_UIModule__o *pSVar3;
  int index;
  
                    /* catch() { ... } // from try @ 0359130c with catch @ 03591378
                       try { // try from 03591378 to 036913b3 has its CatchHandler @ 0359112c */
                    /* catch() { ... } // from try @ 0359129c with catch @ 03591384 */
                    /* catch() { ... } // from try @ 03591354 with catch @ 03591388 */
                    /* catch() { ... } // from try @ 0359134c with catch @ 0359138c */
                    /* catch() { ... } // from try @ 035912e0 with catch @ 03591390 */
  if ((DAT_0456841e & 1) == 0) {
                    /* catch() { ... } // from try @ 03591288 with catch @ 03591394 */
                    /* catch() { ... } // from try @ 03591344 with catch @ 03591398 */
                    /* catch() { ... } // from try @ 0359126c with catch @ 0359139c */
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Item__);
                    /* try { // try from 035913b4 to 036913b7 has its CatchHandler @ 035913d8 */
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
                    /* try { // try from 035913b8 to 036913df has its CatchHandler @ 0359112c */
    DAT_0456841e = 1;
  }
  index = 0;
  while( true ) {
                    /* catch() { ... } // from try @ 035913b4 with catch @ 035913d8 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035913e0 to 036913e7 has its CatchHandler @ 035913fc */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035913e8 to 036913f3 has its CatchHandler @ 0359112c */
    pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
    if (pSVar3 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0359149c;
                    /* try { // try from 035913f4 to 036913fb has its CatchHandler @ 035913fc */
                    /* catch() { ... } // from try @ 03591360 with catch @ 035913fc
                       catch() { ... } // from try @ 035913e0 with catch @ 035913fc
                       catch() { ... } // from try @ 035913f4 with catch @ 035913fc */
    if ((pSVar3->fields)._size <= index) {
      return (Nekki_SF2_GUI_UIModule_o *)0x0;
    }
                    /* try { // try from 03591400 to 03691533 has its CatchHandler @ 03591400
                       catch() { ... } // from try @ 03591400 with catch @ 03591400
                       catch() { ... } // from try @ 035915a4 with catch @ 03591400
                       catch() { ... } // from try @ 035915c4 with catch @ 03591400
                       catch() { ... } // from try @ 03591624 with catch @ 03591400
                       catch() { ... } // from try @ 03591658 with catch @ 03591400
                       catch() { ... } // from try @ 0359168c with catch @ 03591400 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
      if (pSVar3 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0359149c;
    }
    __this = (UnityEngine_Object_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,index,
                        Method_System_Collections_Generic_List<UIModule>_get_Item__);
    if (__this == (UnityEngine_Object_o *)0x0) goto LAB_0359149c;
    a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,AFKICLAFDKC,(MethodInfo *)0x0);
    if (bVar1) break;
    index = index + 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_UIModule_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,index,
                        Method_System_Collections_Generic_List<UIModule>_get_Item__);
    return pNVar2;
  }
LAB_0359149c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

