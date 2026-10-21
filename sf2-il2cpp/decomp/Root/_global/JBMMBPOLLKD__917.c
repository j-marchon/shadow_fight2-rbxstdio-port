// TypeDefIndex 917
// Namespace: 
// public class JBMMBPOLLKD : BOFEMGGNODC
// Fields:
//   private string MLPKGJACOFA; // 0x68
//   private string BNCDLNFEPKG; // 0x70
//   private string HKEHEHOOBOF; // 0x78
//   private string OEMGHPJIEGH; // 0x80
//   private string CFLAFFKFOCJ; // 0x88
//   private string JIGDHKJPMJC; // 0x90
//   private string ACBMPKCDCJM; // 0x98

// ===== private void HEPDJNBIHEN(PKHMIGFEJCL AAJBIMFNMBB, ref HOOAAGABMBL IKKAMAMLIKA, ref int EPINGPGECOM, ref float ABAGBODPCCP, ref bool AHBKHGFDGHN, ref long IIPPKMHCDBI, ref long AINBPAEDKKN, ref string MOMHCKDCKNE, ref bool MMKNJBOMOEH)  [RVA 0x309D17C]
// JBMMBPOLLKD$$HEPDJNBIHEN @ RVA 0x309D17C

void JBMMBPOLLKD__HEPDJNBIHEN
               (JBMMBPOLLKD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,HOOAAGABMBL_o **IKKAMAMLIKA,
               int32_t *EPINGPGECOM,float *ABAGBODPCCP,bool *AHBKHGFDGHN,int64_t *IIPPKMHCDBI,
               int64_t *AINBPAEDKKN,System_String_o **MOMHCKDCKNE,bool *MMKNJBOMOEH,
               MethodInfo *method)

{
  int64_t iVar1;
  int iVar2;
  bool bVar3;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar4;
  System_String_o *pSVar5;
  System_String_array *collection;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_o *pSVar6;
  DOPEEDABNEK_o *__this_03;
  HOOAAGABMBL_o *pHVar7;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  int32_t iVar10;
  double *method_00;
  double dVar11;
  double __this_04;
  
  if ((DAT_04566128 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10653/*"QuestActionDiscount - cant find item "{0}" from name "{1}""*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566128 = 1;
  }
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar4 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar4 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).MLPKGJACOFA,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
       (pSVar5 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method),
       pSVar6 = StringLiteral_1/*""*/, pSVar5 != (System_String_o *)0x0)) {
      collection = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar2 = (__this_02->fields)._size;
        pSVar5 = pSVar6;
        if ((0 < iVar2) &&
           (pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               (__this_02,0,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           iVar2 != 1)) {
          pSVar6 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             (__this_02,1,Method_System_Collections_Generic_List<string>_get_Item__)
          ;
        }
        bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (bVar3) {
          EILGGBOIMGE__KFMNMGGDHFD
                    ((EILGGBOIMGE_o *)__this_01,pSVar6,__this_00,false,(System_String_o *)0x0,
                     (MethodInfo *)0x0);
          dVar11 = (__this_00->fields).HNFHNNLOLGK;
          iVar10 = -0x80000000;
          if (dVar11 != INFINITY) {
            iVar10 = (int)dVar11;
          }
        }
        else {
          iVar10 = -1;
        }
        *EPINGPGECOM = iVar10;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).BNCDLNFEPKG,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        method_00 = &(__this_00->fields).HNFHNNLOLGK;
        *ABAGBODPCCP = (float)*method_00;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).HKEHEHOOBOF,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        *AHBKHGFDGHN = 0.0 < *method_00;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).CFLAFFKFOCJ,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        iVar1 = -0x8000000000000000;
        if (*method_00 != INFINITY) {
          iVar1 = (long)*method_00;
        }
        *IIPPKMHCDBI = iVar1;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).OEMGHPJIEGH,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        iVar1 = -0x8000000000000000;
        if (*method_00 != INFINITY) {
          iVar1 = (long)*method_00;
        }
        *AINBPAEDKKN = iVar1;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).JIGDHKJPMJC,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality
                          ((__this->fields).JIGDHKJPMJC,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if ((bVar3) &&
           (bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(__this_00,(MethodInfo *)0x0), bVar3)) {
          pSVar6 = System_Double__ToString(__this_04,(MethodInfo *)method_00);
        }
        else {
          pSVar6 = (__this_00->fields).DFJBJLBLBGB;
        }
        *MOMHCKDCKNE = pSVar6;
        thunk_FUN_01c20e04();
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).ACBMPKCDCJM,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        *MMKNJBOMOEH = 0.0 < (__this_00->fields).HNFHNNLOLGK;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_03 != (DOPEEDABNEK_o *)0x0) {
          pHVar7 = DOPEEDABNEK__CKKIPBAIEMN(__this_03,pSVar5,(MethodInfo *)0x0);
          *IKKAMAMLIKA = pHVar7;
          thunk_FUN_01c20e04(IKKAMAMLIKA,pHVar7);
          if (*IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
          if (args != (System_Object_array *)0x0) {
            if ((pSVar5 != (System_String_o *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
               lVar8 == 0)) {
LAB_0319d710:
              uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar9,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar5;
              thunk_FUN_01c20e04(args->m_Items,pSVar5);
              pSVar6 = (__this->fields).MLPKGJACOFA;
              if ((pSVar6 != (System_String_o *)0x0) &&
                 (lVar8 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
                 lVar8 == 0)) goto LAB_0319d710;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04(args->m_Items + 1,pSVar6);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10653/*"QuestActionDiscount - cant find item "{0}" from name "{1}""*/,args,(MethodInfo *)0x0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x309D71C]
// JBMMBPOLLKD$$HNIHOIAMDPC @ RVA 0x309D71C

void JBMMBPOLLKD__HNIHOIAMDPC
               (JBMMBPOLLKD_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566129 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10208/*"Period"*/);
    FUN_01bab630(&StringLiteral_11666/*"Sale"*/);
    FUN_01bab630(&StringLiteral_9404/*"NewAmount"*/);
    FUN_01bab630(&StringLiteral_9415/*"NewPrice"*/);
    FUN_01bab630(&StringLiteral_10203/*"Percent"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_13847/*"Toggle"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04566129 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).MLPKGJACOFA = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10203/*"Percent"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).BNCDLNFEPKG = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_13847/*"Toggle"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).HKEHEHOOBOF = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_9404/*"NewAmount"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
            (__this->fields).CFLAFFKFOCJ = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_9415/*"NewPrice"*/,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields).JIGDHKJPMJC = pSVar3;
              thunk_FUN_01c20e04();
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_10208/*"Period"*/,(MethodInfo *)0x0);
                pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                (__this->fields).OEMGHPJIEGH = pSVar3;
                thunk_FUN_01c20e04();
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_11666/*"Sale"*/,(MethodInfo *)0x0);
                  pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                  ppSVar4 = &(__this->fields).ACBMPKCDCJM;
                  *ppSVar4 = pSVar3;
                  thunk_FUN_01c20e04(ppSVar4,pSVar3);
                  return;
                }
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


// ===== public void .ctor()  [RVA 0x309D9DC]
// JBMMBPOLLKD$$.ctor @ RVA 0x309D9DC

void JBMMBPOLLKD___ctor(JBMMBPOLLKD_o *__this,MethodInfo *method)

{
  if ((DAT_0456612a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456612a = 1;
  }
  (__this->fields).MLPKGJACOFA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).BNCDLNFEPKG = StringLiteral_1567/*"0"*/;
  thunk_FUN_01c20e04();
  (__this->fields).HKEHEHOOBOF = StringLiteral_1567/*"0"*/;
  thunk_FUN_01c20e04();
  (__this->fields).OEMGHPJIEGH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).CFLAFFKFOCJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).JIGDHKJPMJC = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ACBMPKCDCJM = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x309DAB0]
// JBMMBPOLLKD$$MAHFCKJGBPP @ RVA 0x309DAB0

void JBMMBPOLLKD__MAHFCKJGBPP(JBMMBPOLLKD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  InvokerMethod pIVar1;
  char *pcVar2;
  int JLAFGLDIFOC;
  bool bVar3;
  bool bVar4;
  int64_t iVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  NMAHEBEALAB_o *pNVar9;
  System_String_o *pSVar10;
  GGHCLMEFIGO_o *__this_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar11;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_01;
  undefined8 uVar12;
  undefined8 *puVar13;
  ACHLOMELAJE_o *pAVar14;
  long lVar15;
  UnityEngine_Object_o *x;
  InvokerMethod GOKKDGLPFPJ;
  System_String_o **ppSVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  float __this_02;
  float fVar19;
  undefined1 in_stack_ffffffffffffff50;
  undefined7 in_stack_ffffffffffffff51;
  int local_9c;
  undefined8 local_98;
  System_String_o *local_90;
  InvokerMethod local_88;
  char *local_80;
  undefined8 local_78;
  bool local_70 [4];
  bool local_6c [4];
  HOOAAGABMBL_o *local_68;
  
  if ((DAT_0456612b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_set_Item__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10652/*"QuestActionDiscount - already have discount: {0}"*/);
    FUN_01bab630(&StringLiteral_707/*"#internalQuest#"*/);
    FUN_01bab630(&StringLiteral_3832/*"Can't find discount item!"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10654/*"QuestActionDiscount - item already have discount: {0} for upgrade with upgradeLevel {1}"*/);
    DAT_0456612b = 1;
  }
  local_98 = (Il2CppMethodPointer)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  local_90 = StringLiteral_1/*""*/;
  local_88 = (InvokerMethod)0x0;
  local_68 = (HOOAAGABMBL_o *)0x0;
  local_6c[0] = false;
  local_70[0] = false;
  local_80 = (char *)0x0;
  local_78 = (Il2CppClass *)0x0;
  JBMMBPOLLKD__HEPDJNBIHEN
            (__this,AAJBIMFNMBB,&local_68,(int32_t *)&local_78,(float *)((long)&local_78 + 4),
             local_6c,(int64_t *)&local_80,(int64_t *)&local_88,&local_90,local_70,
             (MethodInfo *)CONCAT71(in_stack_ffffffffffffff51,in_stack_ffffffffffffff50));
  pIVar1 = local_88;
  if ((long)local_88 < 1) {
    GOKKDGLPFPJ = (InvokerMethod)0x0;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar15 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar5 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    GOKKDGLPFPJ = pIVar1 + iVar5 + lVar15;
  }
  bVar4 = local_6c[0];
  pSVar10 = StringLiteral_1/*""*/;
  if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e2f0;
  JLAFGLDIFOC = (int)local_78;
  if (local_6c[0] == false) {
    if ((int)local_78 < 0) {
      HOOAAGABMBL__BDFNOMENFFF(local_68,(MethodInfo *)0x0);
    }
    else {
      HOOAAGABMBL__KOMBNLCFLNC(local_68,(int)local_78,(MethodInfo *)0x0);
    }
  }
  else {
    if ((int)local_78 < 0) {
      if ((local_68->fields).LDIJKGOHMPG == (NMAHEBEALAB_o *)0x0) {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((local_68->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
        pcVar2 = local_80;
        pSVar18 = local_90;
        pSVar17 = pSVar10;
        if (!bVar3) {
          if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
          pSVar17 = (local_68->fields)._CIEBCKIBJHL_k__BackingField;
        }
        pNVar9 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
        NMAHEBEALAB___ctor(pNVar9,pSVar17,pSVar10,(int64_t)GOKKDGLPFPJ,(int64_t)pcVar2,pSVar18,
                           StringLiteral_1/*""*/,0,false,false,false,(MethodInfo *)0x0);
        if (pNVar9 == (NMAHEBEALAB_o *)0x0) goto LAB_0319e31c;
        (pNVar9->fields).MHHBEKNAPAN = local_70[0];
        if (0.0 < local_78._4_4_) {
          if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
          iVar5 = HOOAAGABMBL__DPEKAKHBPPO(local_68,(MethodInfo *)0x0);
          fVar19 = ((100.0 - local_78._4_4_) / 100.0) * (float)iVar5;
          local_98 = (Il2CppMethodPointer)CONCAT44(fVar19,(undefined4)local_98);
          pSVar10 = System_Single__ToString(fVar19,(MethodInfo *)((long)&local_98 + 4));
          (pNVar9->fields).HCCELBFOFPE = pSVar10;
          fVar19 = (float)thunk_FUN_01c20e04();
          pSVar10 = System_Single__ToString(fVar19,(MethodInfo *)((long)&local_78 + 4));
          (pNVar9->fields).EGEHGIEAIJL = pSVar10;
          thunk_FUN_01c20e04();
        }
        (pNVar9->fields).CKGAMIHJOMC = 0 < (long)pIVar1;
        if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
        (local_68->fields).LDIJKGOHMPG = pNVar9;
        thunk_FUN_01c20e04(&(local_68->fields).LDIJKGOHMPG,pNVar9);
        goto LAB_0319e0c8;
      }
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if ((local_68 == (HOOAAGABMBL_o *)0x0) || (args == (System_Object_array *)0x0))
      goto LAB_0319e31c;
      pSVar10 = (local_68->fields)._COIPKAKHDFP_k__BackingField;
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar15 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class), lVar15 == 0)
         ) goto LAB_0319e324;
      if ((int)args->max_length == 0) goto LAB_0319e320;
      args->m_Items[0] = (Il2CppObject *)pSVar10;
      thunk_FUN_01c20e04(args->m_Items,pSVar10);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar13 = &StringLiteral_10652/*"QuestActionDiscount - already have discount: {0}"*/;
    }
    else {
      pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
               (local_68->fields)._EIDNIKFIPMA_k__BackingField;
      if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_0319e31c;
      bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (pSVar6,(int)local_78,
                         Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_ContainsKey__
                        );
      if (bVar3) {
        if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
        pHVar7 = HOOAAGABMBL__PIGMAMNLCMH(local_68,JLAFGLDIFOC,(MethodInfo *)0x0);
        pSVar10 = StringLiteral_707/*"#internalQuest#"*/;
        if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
          if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
          bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                            ((local_68->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar18 = pSVar10;
            if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
          }
          else {
            if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
            pSVar18 = (local_68->fields)._CIEBCKIBJHL_k__BackingField;
          }
          pHVar7 = HOOAAGABMBL__PIGMAMNLCMH(local_68,JLAFGLDIFOC,(MethodInfo *)0x0);
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
          iVar5 = HOOAAGABMBL__DPEKAKHBPPO(pHVar7,(MethodInfo *)0x0);
          pcVar2 = local_80;
          pSVar17 = local_90;
          local_98 = (Il2CppMethodPointer)
                     CONCAT44(local_98._4_4_,((100.0 - local_78._4_4_) / 100.0) * (float)iVar5);
          pNVar9 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
          NMAHEBEALAB___ctor(pNVar9,pSVar18,pSVar10,(int64_t)GOKKDGLPFPJ,(int64_t)pcVar2,pSVar17,
                             StringLiteral_1/*""*/,0,false,false,false,(MethodInfo *)0x0);
          pSVar10 = System_Single__ToString(__this_02,(MethodInfo *)&local_98);
          if (pNVar9 == (NMAHEBEALAB_o *)0x0) goto LAB_0319e31c;
          (pNVar9->fields).HCCELBFOFPE = pSVar10;
          fVar19 = (float)thunk_FUN_01c20e04();
          pSVar10 = System_Single__ToString(fVar19,(MethodInfo *)((long)&local_78 + 4));
          ppSVar16 = &(pNVar9->fields).EGEHGIEAIJL;
          *ppSVar16 = pSVar10;
          thunk_FUN_01c20e04(ppSVar16,pSVar10);
          (pNVar9->fields).CKGAMIHJOMC = 0 < (long)pIVar1;
          (pNVar9->fields).MHHBEKNAPAN = local_70[0];
          if ((local_68 == (HOOAAGABMBL_o *)0x0) ||
             (pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (local_68->fields)._EIDNIKFIPMA_k__BackingField,
             pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
          goto LAB_0319e31c;
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (pSVar6,JLAFGLDIFOC,(Il2CppObject *)pNVar9,
                     Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_set_Item__);
          goto LAB_0319e0c8;
        }
      }
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if ((local_68 == (HOOAAGABMBL_o *)0x0) || (args == (System_Object_array *)0x0))
      goto LAB_0319e31c;
      pSVar10 = (local_68->fields)._COIPKAKHDFP_k__BackingField;
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar15 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class), lVar15 == 0)
         ) {
LAB_0319e324:
        uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar12,0);
      }
      if ((int)args->max_length == 0) {
LAB_0319e320:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar10;
      thunk_FUN_01c20e04(args->m_Items,pSVar10);
      local_9c = JLAFGLDIFOC;
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_9c);
      if ((pIVar8 != (Il2CppObject *)0x0) &&
         (lVar15 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class), lVar15 == 0))
      goto LAB_0319e324;
      if ((uint)args->max_length < 2) goto LAB_0319e320;
      args->m_Items[1] = pIVar8;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar13 = &StringLiteral_10654/*"QuestActionDiscount - item already have discount: {0} for upgrade with upgradeLevel {1}"*/;
    }
    UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar13,args,(MethodInfo *)0x0);
  }
LAB_0319e0c8:
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
  pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar14 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar14->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    GGHCLMEFIGO__MJGMEEKMAOE(__this_00,(MethodInfo *)0x0);
    lVar15 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01b81620();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar15 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      lVar15 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01b81620();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01b81620();
      }
      if ((**(long **)(lVar15 + 0xb8) == 0) ||
         (pNVar11 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar15 + 0xb8) + 0x178),
         pNVar11 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) goto LAB_0319e31c;
      pHVar7 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar11,(MethodInfo *)0x0);
      if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
        if (local_68 == (HOOAAGABMBL_o *)0x0) goto LAB_0319e31c;
        bVar3 = System_String__op_Equality
                          ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,
                           (local_68->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if (bVar3) {
          lVar15 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01b81620();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar15 + 0xb8) ==
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_0319e31c;
          Nekki_SF2_GUI_Shop_ShopScene__Refresh
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar15 + 0xb8),
                     (MethodInfo *)0x0);
        }
      }
      if (bVar4 == false) {
        lVar15 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01b81620();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01b81620();
        }
        if (((**(long **)(lVar15 + 0xb8) == 0) || (local_68 == (HOOAAGABMBL_o *)0x0)) ||
           (pNVar11 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar15 + 0xb8) + 0x178),
           pNVar11 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) goto LAB_0319e31c;
        __this_01 = Nekki_SF2_GUI_Shop_ItemsPanel__GetCellByName
                              (pNVar11,(local_68->fields)._COIPKAKHDFP_k__BackingField,
                               (MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar4) {
          if (__this_01 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_0319e31c;
          Nekki_SF2_GUI_Shop_ShopTableViewCell__RemoveDiscount(__this_01,(MethodInfo *)0x0);
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_3832/*"Can't find discount item!"*/,(MethodInfo *)0x0);
        }
      }
    }
LAB_0319e2f0:
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0319e31c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

