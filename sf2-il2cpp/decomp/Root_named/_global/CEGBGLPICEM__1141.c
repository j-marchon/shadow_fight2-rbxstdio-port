// TypeDefIndex 1141
// Namespace: 
// public class CEGBGLPICEM : QuestAction
// Fields:
//   private string LAJBAKDJEKM; // 0x68
//   private string ADNBCBCEGBH; // 0x70

// ===== protected override string OFPHPMGMCAL()  [RVA 0x30F9BA8]
// CEGBGLPICEM$$OFPHPMGMCAL @ RVA 0x30F9BA8

System_String_o * CEGBGLPICEM__OFPHPMGMCAL(CEGBGLPICEM_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_0456648e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_230/*" + "*/);
    FUN_01bab630(&StringLiteral_981/*"("*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    DAT_0456648e = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_981/*"("*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields).LAJBAKDJEKM;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_230/*" + "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields).ADNBCBCEGBH;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_1100/*")"*/;
                    /* try { // try from 031f9cc0 to 032fa0c3 has its CatchHandler @ 031f9cc0
                       catch() { ... } // from try @ 031f9cc0 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa294 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa384 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa38c with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa468 with catch @ 031f9cc0 */
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30F9CE0]
// CEGBGLPICEM$$.ctor @ RVA 0x30F9CE0

void CEGBGLPICEM___ctor(CEGBGLPICEM_o *__this,MethodInfo *method)

{
  if ((DAT_0456648f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456648f = 1;
  }
  (__this->fields).LAJBAKDJEKM = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ADNBCBCEGBH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30F9D48]
// CEGBGLPICEM$$HNIHOIAMDPC @ RVA 0x30F9D48

void CEGBGLPICEM__HNIHOIAMDPC
               (CEGBGLPICEM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566490 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10229/*"PerkName"*/);
    FUN_01bab630(&StringLiteral_8110/*"ItemName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566490 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8110/*"ItemName"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).LAJBAKDJEKM = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10229/*"PerkName"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).ADNBCBCEGBH;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30F9E48]
// CEGBGLPICEM$$MAHFCKJGBPP @ RVA 0x30F9E48

/* WARNING: Type propagation algorithm not settling */

void CEGBGLPICEM__MAHFCKJGBPP(CEGBGLPICEM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t EDEIFHGMBFA;
  int32_t EBDDELGICGB;
  Item_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  IGFGDDANEPE_o *__this_01;
  CEGBGLPICEM_o *__this_02;
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_Object_array *args;
  long lVar4;
  Il2CppObject **ppIVar5;
  Roster_o *pAVar6;
  undefined8 uVar7;
  MethodInfo *in_x3;
  System_RuntimeFieldHandle_Fields *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  
  if ((DAT_04566491 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_21);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3665);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3666);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3667);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3669);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3671);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_04566491 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
                    /* try { // try from 031fa184 to 032fa18b has its CatchHandler @ 031fa39c */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031fa1a0 to 032fa1f3 has its CatchHandler @ 031fa3b0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3665,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3666,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 031fa204 to 032fa25b has its CatchHandler @ 031fa3ac */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    return;
  }
  pSVar9 = (__this->fields).LAJBAKDJEKM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar9,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 == (Item_o *)0x0) goto LAB_031fa42c;
  IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_00,pSVar9,(MethodInfo *)0x0);
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3667,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar8 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3668;
  }
  else {
    pSVar9 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar9,(MethodInfo *)0x0);
    if (__this_01 != (IGFGDDANEPE_o *)0x0) {
      pSVar9 = (__this->fields).ADNBCBCEGBH;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = (CEGBGLPICEM_o *)MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar9,(MethodInfo *)0x0);
      AEFIPJLKAFI = CEGBGLPICEM__DCIBEJLDPHL
                              (__this_02,IKKAMAMLIKA,(System_String_o *)__this_02,in_x3);
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)AEFIPJLKAFI,
                         Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
      if (!bVar1) {
        EDEIFHGMBFA = IGFGDDANEPE__LGIMDOAMCNG(__this_01,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
                    /* try { // try from 031fa36c to 032fa373 has its CatchHandler @ 031fa3a8 */
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 031fa374 to 032fa37b has its CatchHandler @ 031fa3a4 */
                    /* try { // try from 031fa37c to 032fa383 has its CatchHandler @ 031fa3a0 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 031fa384 to 032fa387 has its CatchHandler @ 031f9cc0 */
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 031fa388 to 032fa38b has its CatchHandler @ 031fa394 */
                    /* try { // try from 031fa38c to 032fa3cf has its CatchHandler @ 031f9cc0 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031fa388 with catch @ 031fa394 */
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 031fa184 with catch @ 031fa39c */
                    /* catch() { ... } // from try @ 031fa37c with catch @ 031fa3a0 */
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 031fa374 with catch @ 031fa3a4 */
        if (pAVar6 != (Roster_o *)0x0) {
                    /* catch() { ... } // from try @ 031fa36c with catch @ 031fa3a8 */
                    /* catch() { ... } // from try @ 031fa204 with catch @ 031fa3ac
                       catch() { ... } // from try @ 031fa288 with catch @ 031fa3ac */
          EBDDELGICGB = Roster__EOEAKGGDBFH(pAVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031fa1a0 with catch @ 031fa3b0
                       catch() { ... } // from try @ 031fa26c with catch @ 031fa3b0 */
                    /* catch() { ... } // from try @ 031fa120 with catch @ 031fa3b4 */
                    /* catch() { ... } // from try @ 031fa0c4 with catch @ 031fa3b8 */
          IGFGDDANEPE__JJPJJDHOFLE(__this_01,AEFIPJLKAFI,EDEIFHGMBFA,EBDDELGICGB,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
                    /* try { // try from 031fa3d0 to 032fa3d3 has its CatchHandler @ 031fa3e8 */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
                    /* catch() { ... } // from try @ 031fa3d0 with catch @ 031fa3e8 */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 031fa3f8 to 032fa467 has its CatchHandler @ 031fa47c */
          pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar6 != (Roster_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar6,false,(MethodInfo *)0x0);
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_031fa42c;
      }
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3671,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
                    /* try { // try from 031fa0c4 to 032fa0eb has its CatchHandler @ 031fa3b8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_21,(MethodInfo *)0x0
                );
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if (args == (System_Object_array *)0x0) goto LAB_031fa42c;
      pSVar10 = (__this->fields).ADNBCBCEGBH;
                    /* try { // try from 031fa120 to 032fa14b has its CatchHandler @ 031fa3b4 */
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_031fa434;
      if ((int)args->max_length == 0) goto LAB_031fa430;
      args->m_Items[0] = (Il2CppObject *)pSVar10;
      thunk_FUN_01c20e04(args->m_Items,pSVar10);
      pSVar10 = (__this->fields).LAJBAKDJEKM;
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_031fa434;
      if ((uint)args->max_length < 2) goto LAB_031fa430;
      ppIVar5 = args->m_Items + 1;
      *ppIVar5 = (Il2CppObject *)pSVar10;
      goto LAB_031fa308;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031fa26c to 032fa277 has its CatchHandler @ 031fa3b0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3669,(MethodInfo *)0x0)
    ;
                    /* try { // try from 031fa288 to 032fa293 has its CatchHandler @ 031fa3ac */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031fa294 to 032fa36b has its CatchHandler @ 031f9cc0 */
    pSVar8 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3670;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar8->value,(MethodInfo *)0x0);
  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
LAB_031fa42c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar10 = (__this->fields).LAJBAKDJEKM;
  if ((pSVar10 != (System_String_o *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_031fa434:
    uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar7,0);
  }
  if ((int)args->max_length == 0) {
LAB_031fa430:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  ppIVar5 = args->m_Items;
  *ppIVar5 = (Il2CppObject *)pSVar10;
LAB_031fa308:
  thunk_FUN_01c20e04(ppIVar5,pSVar10);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogErrorFormat(pSVar9,args,(MethodInfo *)0x0);
  return;
}


// ===== private List<PKKLIJLIKGF> DCIBEJLDPHL(HOOAAGABMBL IKKAMAMLIKA, string LMPMHKIABOM)  [RVA 0x30FA440]
// CEGBGLPICEM$$DCIBEJLDPHL @ RVA 0x30FA440

System_Collections_Generic_List_PKKLIJLIKGF__o *
CEGBGLPICEM__DCIBEJLDPHL
          (CEGBGLPICEM_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,System_String_o *LMPMHKIABOM,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_01;
  PKKLIJLIKGF_array *pPVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 031fa468 to 032fa473 has its CatchHandler @ 031f9cc0 */
  if ((DAT_04566492 & 1) == 0) {
                    /* try { // try from 031fa474 to 032fa47b has its CatchHandler @ 031fa47c */
                    /* catch() { ... } // from try @ 031fa3f8 with catch @ 031fa47c
                       catch() { ... } // from try @ 031fa474 with catch @ 031fa47c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
                    /* try { // try from 031fa480 to 032fa843 has its CatchHandler @ 031fa480
                       catch() { ... } // from try @ 031fa480 with catch @ 031fa480
                       catch() { ... } // from try @ 031faa2c with catch @ 031fa480
                       catch() { ... } // from try @ 031faae8 with catch @ 031fa480
                       catch() { ... } // from try @ 031faaf0 with catch @ 031fa480
                       catch() { ... } // from try @ 031fabd4 with catch @ 031fa480 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04566492 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if ((IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) ||
     (__this_01 = (IKKAMAMLIKA->fields)._LCJBEIKDDNA_k__BackingField,
     __this_01 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    item = local_50.fields._current;
    if (!bVar3) goto LAB_031fa5c0;
    if ((PKKLIJLIKGF_o *)local_50.fields._current == (PKKLIJLIKGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Inequality
                      (((PKKLIJLIKGF_Fields *)((long)local_50.fields._current + 0x10))->DEKCPPOJFEH,
                       LMPMHKIABOM,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
  } while (bVar3);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pPVar4 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this_00->fields)._size;
  if (uVar1 < (uint)pPVar4->max_length) {
    (__this_00->fields)._size = uVar1 + 1;
    pPVar4->m_Items[(int)uVar1] = (PKKLIJLIKGF_o *)item;
    thunk_FUN_01c20e04(pPVar4->m_Items + (int)uVar1,item);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,item,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  }
LAB_031fa5c0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return __this_00;
}

