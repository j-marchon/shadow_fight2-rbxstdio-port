// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$IEMBODIJFHH @ RVA 0x315192C

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__IEMBODIJFHH
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,BNKBGIIJNLF_o *MDGCHBMIJJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this_01;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04566812 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MaterialPriceUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566812 = 1;
  }
                    /* try { // try from 03251990 to 033519bb has its CatchHandler @ 03251990
                       catch() { ... } // from try @ 03251990 with catch @ 03251990
                       catch() { ... } // from try @ 03251a5c with catch @ 03251990
                       catch() { ... } // from try @ 03251aa4 with catch @ 03251990
                       catch() { ... } // from try @ 03251b10 with catch @ 03251990 */
  pUVar4 = (__this->fields)._MaterialPriceUIPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032519bc to 033519c7 has its CatchHandler @ 03251a70 */
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._MaterialsParent;
    if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 032519e0 to 033519e3 has its CatchHandler @ 03251a64 */
                    /* try { // try from 032519e4 to 033519eb has its CatchHandler @ 03251a74 */
                    /* try { // try from 032519f0 to 033519fb has its CatchHandler @ 03251a6c */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<MaterialPriceUI>__);
      if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0) {
                    /* try { // try from 03251a0c to 03351a13 has its CatchHandler @ 03251a68 */
        Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_Material
                  (__this_01,MDGCHBMIJJJ,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<MaterialPriceUI>_Add__;
        __this_02 = (__this->fields).MIOLFPIJMDH;
        if (__this_02 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
                    /* try { // try from 03251a2c to 03351a2f has its CatchHandler @ 03251a5c */
          pNVar3 = (__this_02->fields)._items;
                    /* try { // try from 03251a3c to 03351a47 has its CatchHandler @ 03251a60 */
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pNVar3->max_length) {
                    /* try { // try from 03251a58 to 03351a5b has its CatchHandler @ 03251a74 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a2c with catch @ 03251a5c
                       try { // try from 03251a5c to 03351a8b has its CatchHandler @ 03251990 */
              (__this_02->fields)._size = uVar1 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a3c with catch @ 03251a60
                        */
              pNVar3->m_Items[(int)uVar1] = __this_01;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519e0 with catch @ 03251a64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a0c with catch @ 03251a68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519f0 with catch @ 03251a6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519bc with catch @ 03251a70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519e4 with catch @ 03251a74
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03251a58 with catch @ 03251a74
                        */
              thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
              return;
            }
                    /* try { // try from 03251a8c to 03351aa3 has its CatchHandler @ 03251b08 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

