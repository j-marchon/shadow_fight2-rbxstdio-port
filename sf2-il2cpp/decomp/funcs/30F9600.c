// Nekki.SF2.GUI.Shop.ParametersPanelContent$$AdditionalRootGraphics @ RVA 0x30F9600

void Nekki_SF2_GUI_Shop_ParametersPanelContent__AdditionalRootGraphics
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,bool CBBJMNGHMIF,
               UnityEngine_UI_Graphic_array *NPGBEDGMDNG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_Graphic__o *pSVar1;
  
  if ((DAT_0456648a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_Clear__);
    DAT_0456648a = 1;
  }
  if (!CBBJMNGHMIF) {
    pSVar1 = (__this->fields).PMHLGLALHLH;
    if (pSVar1 == (System_Collections_Generic_List_Graphic__o *)0x0) goto LAB_031f96b8;
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((NPGBEDGMDNG == (UnityEngine_UI_Graphic_array *)0x0) || (NPGBEDGMDNG->max_length == 0)) {
    return;
  }
  pSVar1 = (__this->fields).PMHLGLALHLH;
  if (pSVar1 != (System_Collections_Generic_List_Graphic__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)NPGBEDGMDNG,
               Method_System_Collections_Generic_List<Graphic>_AddRange__);
    return;
  }
LAB_031f96b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

