// TypeDefIndex 2046
// Namespace: 
// public class OCOEAJMJEOP : DOCABGGCCIL
// Fields:
//   public string JIJLBFGKNJK; // 0x18
//   public uint GBDPLCLDMIG; // 0x20
//   protected string IDHLEGNBHLC; // 0x28
//   public List<PKKLIJLIKGF> BJNEIDNIMHI; // 0x30

// ===== public void BJKIFFGGDEE(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x32AA550]
// OCOEAJMJEOP$$BJKIFFGGDEE @ RVA 0x32AA550

void OCOEAJMJEOP__BJKIFFGGDEE
               (OCOEAJMJEOP_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *__this_00;
  MethodInfo *in_x3;
  MMFIDKMDADC_o *HPACPFLKHPK_00;
  NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO;
  
  if ((DAT_0456742b & 1) == 0) {
    FUN_01bab630(&NILLKLHKLHG_GLEGDBCJEOA_TypeInfo);
    __this = (OCOEAJMJEOP_o *)FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    DAT_0456742b = 1;
  }
  if ((HPACPFLKHPK != (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) &&
     (ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)(HPACPFLKHPK->fields).IMMNELPBGIF,
     ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0)) {
    bVar1 = (NILLKLHKLHG_GLEGDBCJEOA_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (ACCIJLGMHOO->klass->_2).naturalAligment) &&
       (((ACCIJLGMHOO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)NILLKLHKLHG_GLEGDBCJEOA_TypeInfo &&
        (__this_00 = (ACCIJLGMHOO->fields).IHJHOFMNAOA, __this = (OCOEAJMJEOP_o *)0x0,
        __this_00 != (System_String_o *)0x0)))) {
      HPACPFLKHPK_00 = (HPACPFLKHPK->fields).JDGILABGBGH;
      bVar2 = System_String__Equals(__this_00,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
      if (bVar2) {
        OCOEAJMJEOP__GAKBKBOMKHP((OCOEAJMJEOP_o *)0x1,ACCIJLGMHOO,HPACPFLKHPK_00,in_x3);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void GAKBKBOMKHP(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x32AA610]
// OCOEAJMJEOP$$GAKBKBOMKHP @ RVA 0x32AA610

void OCOEAJMJEOP__GAKBKBOMKHP
               (OCOEAJMJEOP_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  Roster_o *__this_01;
  int32_t local_24;
  
  if ((DAT_0456742c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (OCOEAJMJEOP_o *)FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_0456742c = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = (OCOEAJMJEOP_o *)0x0;
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Equals(__this_00,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
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
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (OCOEAJMJEOP_o *)0x0;
      if (__this_01 != (Roster_o *)0x0) {
        local_24 = Roster__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
        __this = (OCOEAJMJEOP_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32AA70C]
// OCOEAJMJEOP$$.ctor @ RVA 0x32AA70C

/* WARNING: Removing unreachable block (ram,0x033aab8c) */

void OCOEAJMJEOP___ctor(OCOEAJMJEOP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  uint32_t uVar3;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PKKLIJLIKGF_o *__this_00;
  long lVar10;
  PKKLIJLIKGF_array *pPVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_PKKLIJLIKGF__o **ppSVar14;
  
                    /* try { // try from 033aa714 to 034aa9c3 has its CatchHandler @ 033aa714
                       catch() { ... } // from try @ 033aa714 with catch @ 033aa714
                       catch() { ... } // from try @ 033aaa5c with catch @ 033aa714
                       catch() { ... } // from try @ 033aaab8 with catch @ 033aa714
                       catch() { ... } // from try @ 033aaae4 with catch @ 033aa714
                       catch() { ... } // from try @ 033aab24 with catch @ 033aa714 */
  if ((DAT_0456742d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14591/*"UpgradeNumber"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456742d = 1;
  }
  pSVar4 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  ppSVar14 = &(__this->fields).BJNEIDNIMHI;
  *ppSVar14 = pSVar4;
  thunk_FUN_01c20e04(ppSVar14,pSVar4);
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  (__this->fields).super.NOBEFHEECKJ = 1;
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).JIJLBFGKNJK = pSVar7;
    thunk_FUN_01c20e04();
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).IDHLEGNBHLC = pSVar7;
      thunk_FUN_01c20e04();
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_14591/*"UpgradeNumber"*/,(MethodInfo *)0x0);
        uVar3 = EIABCPKDEBD__FECKAJHFDJM(pSVar6,0,(MethodInfo *)0x0);
        (__this->fields).GBDPLCLDMIG = uVar3;
        plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                   (AHDGNOJPPIB,StringLiteral_5703/*"Enchantments"*/,
                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (plVar8 == (long *)0x0) {
          return;
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
        if (plVar8 != (long *)0x0) {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar10 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_033aa9c4;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033aa9c4:
                    /* try { // try from 033aa9c4 to 034aa9cb has its CatchHandler @ 033aaabc */
            uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar12 & 1) == 0) {
              plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
              if (plVar8 == (long *)0x0) {
                return;
              }
              lVar10 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* catch() { ... } // from try @ 033aaae0 with catch @ 033aab0c */
              if (uVar12 == 0) goto LAB_033aab30;
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_033aab18;
            }
            lVar10 = *plVar8;
                    /* try { // try from 033aa9d8 to 034aa9e7 has its CatchHandler @ 033aaac4 */
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                    /* try { // try from 033aa9f4 to 034aaa5b has its CatchHandler @ 033aaac0 */
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_033aaa24;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_033aaa24:
            AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            __this_00 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
            if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033aaa5c to 034aaaab has its CatchHandler @ 033aa714 */
              if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB_00);
              }
            }
            PKKLIJLIKGF___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
            lVar10 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
            pSVar4 = *ppSVar14;
            if (pSVar4 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pPVar11 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pPVar11 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar4->fields)._size;
                    /* try { // try from 033aaaac to 034aaab7 has its CatchHandler @ 033aaac8 */
            if (uVar2 < (uint)pPVar11->max_length) {
                    /* try { // try from 033aaab8 to 034aaadf has its CatchHandler @ 033aa714 */
              (pSVar4->fields)._size = uVar2 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033aa9c4 with catch @ 033aaabc
                        */
              pPVar11->m_Items[(int)uVar2] = __this_00;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033aa9f4 with catch @ 033aaac0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033aa9d8 with catch @ 033aaac4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033aaaac with catch @ 033aaac8
                        */
              thunk_FUN_01c20e04(pPVar11->m_Items + (int)uVar2,__this_00);
            }
            else {
                    /* try { // try from 033aaae0 to 034aaae3 has its CatchHandler @ 033aab0c */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
                    /* try { // try from 033aaae4 to 034aab1b has its CatchHandler @ 033aa714 */
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
                    /* try { // try from 033aab24 to 034aab2f has its CatchHandler @ 033aa714 */
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_033aab18:
                    /* try { // try from 033aab1c to 034aab23 has its CatchHandler @ 033aab38 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_033aab4c;
    }
  }
LAB_033aab30:
                    /* try { // try from 033aab30 to 034aab37 has its CatchHandler @ 033aab38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033aab1c with catch @ 033aab38
                       catch(type#2 @ 00000000) { ... } // from try @ 033aab30 with catch @ 033aab38
                        */
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_033aab4c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// ===== public int EGKAPNMCLDI()  [RVA 0x32AAC5C]
// OCOEAJMJEOP$$EGKAPNMCLDI @ RVA 0x32AAC5C

int32_t OCOEAJMJEOP__EGKAPNMCLDI(OCOEAJMJEOP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *pMVar2;
  MethodInfo *extraout_x1;
  System_String_o *OAPELGIBHGF;
  
  if ((DAT_0456742e & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&Method_OCOEAJMJEOP_BJKIFFGGDEE__);
    FUN_01bab630(&Method_OCOEAJMJEOP_GLHBJFHGHLC__);
    DAT_0456742e = 1;
    method = extraout_x1;
  }
  OAPELGIBHGF = (__this->fields).IDHLEGNBHLC;
  JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo,method);
  System_Action<object>___ctor();
  FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
  System_Action<object>___ctor();
  __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
  NILLKLHKLHG___ctor(__this_00,OAPELGIBHGF,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
  if ((__this_00 != (NILLKLHKLHG_o *)0x0) &&
     (pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0),
     pMVar2 != (MMFIDKMDADC_o *)0x0)) {
    iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pMVar2->fields).HPACPFLKHPK,0,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string KGLJICLJHEL, string JLAFGLDIFOC)  [RVA 0x32AAD70]
// OCOEAJMJEOP$$.ctor @ RVA 0x32AAD70

void OCOEAJMJEOP___ctor(OCOEAJMJEOP_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o **ppSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456742f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_0456742f = 1;
  }
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  ppSVar1 = &(__this->fields).BJNEIDNIMHI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.NOBEFHEECKJ = 1;
  ppSVar2 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  ppSVar2 = &(__this->fields).IDHLEGNBHLC;
  *ppSVar2 = JLAFGLDIFOC;
  thunk_FUN_01c20e04(ppSVar2,JLAFGLDIFOC);
  (__this->fields).GBDPLCLDMIG = 0;
  return;
}


// ===== public void GLHBJFHGHLC(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x32AAE38]
// OCOEAJMJEOP$$GLHBJFHGHLC @ RVA 0x32AAE38

void OCOEAJMJEOP__GLHBJFHGHLC
               (OCOEAJMJEOP_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  return;
}

