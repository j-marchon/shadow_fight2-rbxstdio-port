// NIELMODLCLC$$HNIHOIAMDPC @ RVA 0x3597770

void NIELMODLCLC__HNIHOIAMDPC
               (NIELMODLCLC_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Char_array *separator;
  System_String_array *pSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *item;
  ulong uVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *pCVar9;
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  ulong uVar10;
  
  if ((DAT_04568da7 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_Add__);
                    /* try { // try from 036977ac to 037977af has its CatchHandler @ 03697814 */
                    /* try { // try from 036977b0 to 037977cf has its CatchHandler @ 03697584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369775c with catch @ 036977b4
                        */
    FUN_01bab630(&string_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369774c with catch @ 036977b8
                        */
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_10305);
                    /* try { // try from 036977d0 to 037977d3 has its CatchHandler @ 036977f4 */
                    /* try { // try from 036977d4 to 037977fb has its CatchHandler @ 03697584 */
    FUN_01bab630(&StringLiteral_2983);
    DAT_04568da7 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036977d0 with catch @ 036977f4 */
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036977fc to 0379780f has its CatchHandler @ 03697878 */
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369769c with catch @ 03697810
                       try { // try from 03697810 to 0379782f has its CatchHandler @ 03697584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036977ac with catch @ 03697814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03697684 with catch @ 03697818
                        */
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_10305,(MethodInfo *)0x0);
                    /* try { // try from 03697830 to 03797833 has its CatchHandler @ 03697854 */
                    /* try { // try from 03697834 to 0379785b has its CatchHandler @ 03697584 */
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_8907,(MethodInfo *)0x0);
      iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar6,(MethodInfo *)0x0);
      (__this->fields).AOIGHJKIBAA = iVar3;
                    /* catch() { ... } // from try @ 03697830 with catch @ 03697854 */
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0369785c to 03797863 has its CatchHandler @ 03697878 */
                    /* try { // try from 03697864 to 0379786f has its CatchHandler @ 03697584 */
                    /* try { // try from 03697870 to 03797877 has its CatchHandler @ 03697878 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036977fc with catch @ 03697878
                       catch(type#2 @ 00000000) { ... } // from try @ 0369785c with catch @ 03697878
                       catch(type#2 @ 00000000) { ... } // from try @ 03697870 with catch @ 03697878
                        */
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_2983,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar5,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
        if (separator != (System_Char_array *)0x0) {
          if ((int)separator->max_length == 0) {
LAB_03697998:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          separator->m_Items[0] = 0x7c;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (pSVar7 = System_String__Split(pSVar6,separator,1,(MethodInfo *)0x0),
             pSVar7 != (System_String_array *)0x0)) {
            if (0 < (int)pSVar7->max_length) {
              uVar10 = 0;
              uVar8 = pSVar7->max_length & 0xffffffff;
              do {
                if (uVar8 <= uVar10) goto LAB_03697998;
                __this_00 = (__this->fields).DMEBCLCBAOE;
                item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                 (pSVar7->m_Items[uVar10],(MethodInfo *)0x0);
                lVar2 = Method_System_Collections_Generic_List<ObscuredString>_Add__;
                if (__this_00 == (System_Collections_Generic_List_ObscuredString__o *)0x0)
                goto LAB_03697994;
                pCVar9 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pCVar9 == (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *)0x0)
                goto LAB_03697994;
                uVar1 = (__this_00->fields)._size;
                if (uVar1 < (uint)pCVar9->max_length) {
                  (__this_00->fields)._size = uVar1 + 1;
                  pCVar9->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                uVar1 = (uint)pSVar7->max_length;
                uVar8 = (ulong)uVar1;
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)uVar1);
            }
            return;
          }
        }
      }
    }
  }
LAB_03697994:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

