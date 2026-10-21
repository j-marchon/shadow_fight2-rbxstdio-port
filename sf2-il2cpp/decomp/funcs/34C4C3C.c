// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$AdditionalRootGraphics @ RVA 0x34C4C3C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__AdditionalRootGraphics
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,bool CBBJMNGHMIF,
               UnityEngine_UI_Graphic_array *NPGBEDGMDNG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_Graphic__o *pSVar1;
  
  if ((DAT_04568627 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_Clear__);
                    /* try { // try from 035c4c78 to 036c4c7b has its CatchHandler @ 035c4c84 */
                    /* try { // try from 035c4c7c to 036c4c9f has its CatchHandler @ 035c4a18 */
    DAT_04568627 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4b54 with catch @ 035c4c80
                        */
  if (!CBBJMNGHMIF) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4c78 with catch @ 035c4c84
                        */
    pSVar1 = (__this->fields).PMHLGLALHLH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4b44 with catch @ 035c4c88
                        */
    if (pSVar1 == (System_Collections_Generic_List_Graphic__o *)0x0) goto LAB_035c4cf4;
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 035c4ca0 to 036c4ca3 has its CatchHandler @ 035c4ccc */
                    /* try { // try from 035c4ca4 to 036c4cdb has its CatchHandler @ 035c4a18 */
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((NPGBEDGMDNG == (UnityEngine_UI_Graphic_array *)0x0) || (NPGBEDGMDNG->max_length == 0)) {
                    /* try { // try from 035c4ce4 to 036c4cef has its CatchHandler @ 035c4a18 */
                    /* try { // try from 035c4cf0 to 036c4cf7 has its CatchHandler @ 035c4cf8 */
    return;
  }
  pSVar1 = (__this->fields).PMHLGLALHLH;
  if (pSVar1 != (System_Collections_Generic_List_Graphic__o *)0x0) {
                    /* catch() { ... } // from try @ 035c4ca0 with catch @ 035c4ccc */
                    /* try { // try from 035c4cdc to 036c4ce3 has its CatchHandler @ 035c4cf8 */
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)NPGBEDGMDNG,
               Method_System_Collections_Generic_List<Graphic>_AddRange__);
    return;
  }
LAB_035c4cf4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

