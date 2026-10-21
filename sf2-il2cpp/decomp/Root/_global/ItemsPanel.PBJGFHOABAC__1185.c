// TypeDefIndex 1185
// Namespace: 
// [CompilerGenerated]
// private sealed class ItemsPanel.PBJGFHOABAC
// Fields:
//   public List<HOOAAGABMBL> p_items; // 0x10

// ===== internal int PJLHIKOOGNO(HOOAAGABMBL item1, HOOAAGABMBL item2)  [RVA 0x31279F4]
// Nekki.SF2.GUI.Shop.ItemsPanel.PBJGFHOABAC$$PJLHIKOOGNO @ RVA 0x31279F4

int32_t Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC__PJLHIKOOGNO
                  (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *__this,HOOAAGABMBL_o *item1,
                  HOOAAGABMBL_o *item2,MethodInfo *method)

{
  int32_t iVar1;
  int value;
  int32_t iVar2;
  GGHCLMEFIGO_o *pGVar3;
  IGFGDDANEPE_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  ACHLOMELAJE_o *pAVar5;
  int32_t local_38;
  int iStack_34;
  
                    /* try { // try from 03227a20 to 03327a43 has its CatchHandler @ 03227c6c */
  if ((DAT_0456666a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456666a = 1;
  }
  local_38 = 0;
  iStack_34 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03227a68 to 03327a6f has its CatchHandler @ 03227bd4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03227a94 to 03327a9b has its CatchHandler @ 03227b68 */
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar3 = (pAVar5->fields).OIDPLCLELEN, pGVar3 != (GGHCLMEFIGO_o *)0x0)) {
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar3,item1,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03227ac4 to 03327ac7 has its CatchHandler @ 03227ccc */
                    /* try { // try from 03227ac8 to 03327acb has its CatchHandler @ 03227ca8 */
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 03227acc to 03327acf has its CatchHandler @ 03227ca0 */
                    /* try { // try from 03227ad0 to 03327ad3 has its CatchHandler @ 03227c98 */
                    /* try { // try from 03227ad4 to 03327ad7 has its CatchHandler @ 03227c94 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03227ad8 to 03327adb has its CatchHandler @ 03227c90 */
      thunk_FUN_01ba7564();
                    /* try { // try from 03227adc to 03327adf has its CatchHandler @ 03227c8c */
    }
                    /* try { // try from 03227ae0 to 03327ae3 has its CatchHandler @ 03227c88 */
                    /* try { // try from 03227ae4 to 03327ae7 has its CatchHandler @ 03227c74 */
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03227ae8 to 03327aeb has its CatchHandler @ 03227c70 */
                    /* try { // try from 03227aec to 03327af3 has its CatchHandler @ 03227cf0 */
    if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
       (pGVar3 = (pAVar5->fields).OIDPLCLELEN, pGVar3 != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 03227af4 to 03327af7 has its CatchHandler @ 03227c50 */
                    /* try { // try from 03227af8 to 03327afb has its CatchHandler @ 03227c44 */
                    /* try { // try from 03227afc to 03327aff has its CatchHandler @ 03227c40 */
      __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar3,item2,(MethodInfo *)0x0);
                    /* try { // try from 03227b00 to 03327b07 has its CatchHandler @ 03227cdc */
      if (__this_00 == (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 03227b1c to 03327b1f has its CatchHandler @ 03227c04 */
        if (item1 == (HOOAAGABMBL_o *)0x0) goto LAB_03227bb4;
                    /* try { // try from 03227b20 to 03327b23 has its CatchHandler @ 03227c00 */
        iVar1 = (item1->fields)._HCHGENFJLHA_k__BackingField;
      }
      else {
                    /* try { // try from 03227b08 to 03327b0b has its CatchHandler @ 03227c20 */
                    /* try { // try from 03227b0c to 03327b0f has its CatchHandler @ 03227c14 */
                    /* try { // try from 03227b10 to 03327b13 has its CatchHandler @ 03227c10 */
        iVar1 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03227b14 to 03327b1b has its CatchHandler @ 03227cd4 */
      }
                    /* try { // try from 03227b24 to 03327b27 has its CatchHandler @ 03227bfc */
                    /* try { // try from 03227b28 to 03327b2b has its CatchHandler @ 03227be0 */
      iStack_34 = iVar1;
      if (__this_01 == (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 03227b40 to 03327b43 has its CatchHandler @ 03227bc0 */
        if (item2 == (HOOAAGABMBL_o *)0x0) goto LAB_03227bb4;
                    /* try { // try from 03227b44 to 03327b47 has its CatchHandler @ 03227bbc */
        value = (item2->fields)._HCHGENFJLHA_k__BackingField;
      }
      else {
                    /* try { // try from 03227b2c to 03327b2f has its CatchHandler @ 03227bc8 */
                    /* try { // try from 03227b30 to 03327b37 has its CatchHandler @ 03227be4 */
        value = IGFGDDANEPE__LGIMDOAMCNG(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03227b38 to 03327b3b has its CatchHandler @ 03227bd0 */
                    /* try { // try from 03227b3c to 03327b3f has its CatchHandler @ 03227bcc */
      }
                    /* try { // try from 03227b48 to 03327b4b has its CatchHandler @ 03227bac */
      pSVar4 = (__this->fields).p_items;
                    /* try { // try from 03227b4c to 03327b53 has its CatchHandler @ 03227bd4 */
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 03227b54 to 03327b57 has its CatchHandler @ 03227ba4 */
                    /* try { // try from 03227b58 to 03327b5b has its CatchHandler @ 03227ba0 */
                    /* try { // try from 03227b5c to 03327b5f has its CatchHandler @ 03227b9c */
                    /* try { // try from 03227b60 to 03327b67 has its CatchHandler @ 03227bd8 */
        local_38 = System_Collections_Generic_List<object>__IndexOf
                             ((System_Collections_Generic_List_object__o *)pSVar4,
                              (Il2CppObject *)item1,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* catch() { ... } // from try @ 03227a94 with catch @ 03227b68
                       try { // try from 03227b68 to 03327d1f has its CatchHandler @ 03226e68 */
        pSVar4 = (__this->fields).p_items;
                    /* catch() { ... } // from try @ 032276cc with catch @ 03227b6c */
        if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* catch() { ... } // from try @ 032276c4 with catch @ 03227b70 */
                    /* catch() { ... } // from try @ 032276ac with catch @ 03227b74 */
                    /* catch() { ... } // from try @ 032276a0 with catch @ 03227b78 */
          iVar2 = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (Il2CppObject *)item2,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* catch() { ... } // from try @ 03227688 with catch @ 03227b7c */
                    /* catch() { ... } // from try @ 03227670 with catch @ 03227b80 */
          if (iVar1 == value) {
                    /* catch() { ... } // from try @ 03227660 with catch @ 03227b84 */
                    /* catch() { ... } // from try @ 03227644 with catch @ 03227b88 */
            iVar1 = (int32_t)&local_38;
            value = iVar2;
                    /* catch() { ... } // from try @ 0322763c with catch @ 03227b8c */
          }
          else {
                    /* catch() { ... } // from try @ 03227624 with catch @ 03227b90 */
            iVar1 = (int32_t)&iStack_34;
                    /* catch() { ... } // from try @ 03227618 with catch @ 03227b94 */
          }
                    /* catch() { ... } // from try @ 03227600 with catch @ 03227b98 */
                    /* catch() { ... } // from try @ 03227b5c with catch @ 03227b9c */
          iVar1 = System_Int32__CompareTo(iVar1,value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03227b58 with catch @ 03227ba0 */
                    /* catch() { ... } // from try @ 03227b54 with catch @ 03227ba4 */
                    /* catch() { ... } // from try @ 03227784 with catch @ 03227ba8 */
                    /* catch() { ... } // from try @ 03227b48 with catch @ 03227bac */
                    /* catch() { ... } // from try @ 032275e4 with catch @ 03227bb0 */
          return iVar1;
        }
      }
    }
  }
LAB_03227bb4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032273ac with catch @ 03227bb4 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3127BB8]
// Nekki.SF2.GUI.Shop.ItemsPanel.PBJGFHOABAC$$.ctor @ RVA 0x3127BB8

void Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03227154 with catch @ 03227bb8 */
                    /* catch() { ... } // from try @ 03227b44 with catch @ 03227bbc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

