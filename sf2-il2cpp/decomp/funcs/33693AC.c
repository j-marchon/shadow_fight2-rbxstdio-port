// MDFGJKBMECA$$JCEKHIOODBO @ RVA 0x33693AC

void MDFGJKBMECA__JCEKHIOODBO
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *KGLJICLJHEL;
  GEBHIBIEAJE_o *AEAMAIHIFKL;
  JGHEMMGMLND_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *pNVar4;
  UnityEngine_Transform_o *NCKFIGCBCPO;
  Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this_01;
  System_Collections_Generic_List_JGHEMMGMLND__o *__this_02;
  OLKKAIFGGAK_o *pOVar5;
  JGHEMMGMLND_array *pJVar6;
  
  if ((DAT_04567ad5 & 1) == 0) {
    FUN_01bab630(&JGHEMMGMLND_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGHEMMGMLND>_Add__);
    FUN_01bab630(&StringLiteral_5627);
    DAT_04567ad5 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if ((__this != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this,StringLiteral_5627,(MethodInfo *)0x0),
       pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
      KGLJICLJHEL = (System_String_o *)
                    (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
        AEAMAIHIFKL = GBJGJEGPHKD__MOEFLHJOFIC(BCKBBGCOMJD,KGLJICLJHEL,(MethodInfo *)0x0);
        if (AEAMAIHIFKL == (GEBHIBIEAJE_o *)0x0) {
          return;
        }
        __this_00 = (JGHEMMGMLND_o *)thunk_FUN_01bda818(JGHEMMGMLND_TypeInfo);
        JGHEMMGMLND___ctor(__this_00,AHDGNOJPPIB,AEAMAIHIFKL,(MethodInfo *)0x0);
        pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
        if ((((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
             (pNVar4 = (pOVar5->fields).HJFIJBGFECC,
             pNVar4 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0)) &&
            (NCKFIGCBCPO = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
            __this_00 != (JGHEMMGMLND_o *)0x0)) &&
           (__this_01 = JGHEMMGMLND__PMLCIOCDHDM(__this_00,NCKFIGCBCPO,(MethodInfo *)0x0),
           __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0)) {
          Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Render(__this_01,(MethodInfo *)0x0);
          pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
          if ((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
             (pNVar4 = (pOVar5->fields).HJFIJBGFECC,
             pNVar4 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0)) {
            Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__AddCapsuleRender
                      (pNVar4,__this_01,(MethodInfo *)0x0);
            __this_02 = GBJGJEGPHKD__CEIMMODODJC(BCKBBGCOMJD,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<JGHEMMGMLND>_Add__;
            if (__this_02 != (System_Collections_Generic_List_JGHEMMGMLND__o *)0x0) {
              pJVar6 = (__this_02->fields)._items;
              (__this_02->fields)._version = (__this_02->fields)._version + 1;
              if (pJVar6 != (JGHEMMGMLND_array *)0x0) {
                uVar1 = (__this_02->fields)._size;
                if (uVar1 < (uint)pJVar6->max_length) {
                  (__this_02->fields)._size = uVar1 + 1;
                  pJVar6->m_Items[(int)uVar1] = __this_00;
                  thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

