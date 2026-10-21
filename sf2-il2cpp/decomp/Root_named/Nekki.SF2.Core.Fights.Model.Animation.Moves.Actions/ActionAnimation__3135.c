// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionAnimation  (obfuscated IIMNGGHGKOD)
// TypeDefIndex 3135
// Namespace: 
// public class ActionAnimation
// Fields:
//   private ObscuredInt JDNKKGPNHPB; // 0x10
//   private ActionAnimation.OKHALMCOJOI NPGJDANOMIK; // 0x20
//   private int EMPEBPJNGKP; // 0x24
//   private EventAnimation.MIFHAKDMDJH BGOHEOKLMHD; // 0x28
//   private List<ConditionAnimation> KDIMDBHMBEM; // 0x30
//   private Model <HKPEJNKNEGG>k__BackingField; // 0x38
//   private LCAJGLLBBEC.ELJAALFNLIP LOAFPIOGJAF; // 0x40

// ===== public bool KOLIFGAJOHA(int PKDBOMAHGHC)  [RVA 0x34D2DA8]
// ActionAnimation$$KOLIFGAJOHA @ RVA 0x34D2DA8

bool ActionAnimation__KOLIFGAJOHA(ActionAnimation_o *__this,int32_t PKDBOMAHGHC,MethodInfo *method)

{
  if ((__this->fields).NPGJDANOMIK != 0) {
    return false;
  }
  return (__this->fields).EMPEBPJNGKP == PKDBOMAHGHC;
}


// ===== public LCAJGLLBBEC.ELJAALFNLIP LCEKFBMGKHG()  [RVA 0x34D2DC8]
// ActionAnimation$$LCEKFBMGKHG @ RVA 0x34D2DC8

int32_t ActionAnimation__LCEKFBMGKHG(ActionAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).LOAFPIOGJAF;
}


// ===== public virtual void NCMDLPOGBPE()  [RVA 0x34D2DD0]
// ActionAnimation$$NCMDLPOGBPE @ RVA 0x34D2DD0

void ActionAnimation__NCMDLPOGBPE(ActionAnimation_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void GNLPNKGBAFL(ActionAnimation.JAGIKBINGJI CJNHFNHJHPE)  [RVA 0x34D2DD4]
// ActionAnimation$$GNLPNKGBAFL @ RVA 0x34D2DD4

void ActionAnimation__GNLPNKGBAFL(ActionAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== private bool BNNIDPDMOIL(InfoAnimation NLEBDPHNIDI, Model BCKBBGCOMJD)  [RVA 0x34D2DF4]
// ActionAnimation$$BNNIDPDMOIL @ RVA 0x34D2DF4

bool ActionAnimation__BNNIDPDMOIL
               (ActionAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,Model_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  bool bVar1;
  Model_o *pOVar2;
  NJPBHDMCLIN_o *__this_00;
  ModelParameters_o *pPVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Nullable_bool__Fields local_34 [2];
  
  if ((DAT_045686c4 & 1) == 0) {
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<ConditionAnimation>__);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_045686c4 = 1;
  }
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).KDIMDBHMBEM,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<ConditionAnimation>__);
  if (bVar1) {
    return true;
  }
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (pOVar2 = Model__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0),
     pOVar2 != (Model_o *)0x0)) {
    local_34[0] = (System_Nullable_bool__Fields)
                  Model__MNCGKCOBAGC(pOVar2,NLEBDPHNIDI,__this,(MethodInfo *)0x0);
    if (((ushort)local_34[0] & 0xff) != 0) {
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_34,0),
                         Method_System_Nullable<bool>_get_Value__);
      return bVar1;
    }
    __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
    NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
      (__this_00->fields).GGIGKNJPODI = BCKBBGCOMJD;
      thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
      pPVar3 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar3 != (ModelParameters_o *)0x0) {
        pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                 (*(pPVar3->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                           (pPVar3,(pPVar3->klass->vtable)._5_ACBMLHJIFMD.method);
        (__this_00->fields).GFBNJPMOEKD = pSVar4;
        thunk_FUN_01c20e04();
        pOVar2 = Model__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
        if ((pOVar2 != (Model_o *)0x0) &&
           (pPVar3 = (pOVar2->fields).FAPMJJBOFEF, pPVar3 != (ModelParameters_o *)0x0)) {
          pSVar5 = ModelParameters__BMDDFABHHCA(pPVar3,(MethodInfo *)0x0);
          (__this_00->fields).OOFILGKHDDI = pSVar5;
          thunk_FUN_01c20e04();
          pOVar2 = Model__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
          if (pOVar2 != (Model_o *)0x0) {
            pOVar2 = (pOVar2->fields).BPJMMBGIMNC;
            if (pOVar2 == (Model_o *)0x0) {
              pSVar5 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
            }
            else {
              pPVar3 = (pOVar2->fields).FAPMJJBOFEF;
              if (pPVar3 == (ModelParameters_o *)0x0) goto LAB_035d2fe0;
              pSVar5 = ModelParameters__BMDDFABHHCA(pPVar3,(MethodInfo *)0x0);
            }
            (__this_00->fields).GIIIBDMEPDK = pSVar5;
            thunk_FUN_01c20e04(&(__this_00->fields).GIIIBDMEPDK);
            if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
              bVar1 = InfoAnimation__PCPBHJGAOOH
                                (NLEBDPHNIDI,__this_00,(__this->fields).KDIMDBHMBEM,
                                 (EventAnimation_o *)0x0,(MethodInfo *)0x0);
              pOVar2 = Model__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
              if (pOVar2 != (Model_o *)0x0) {
                Model__ICGKMPNIPKC(pOVar2,NLEBDPHNIDI,__this,bVar1,(MethodInfo *)0x0);
                return bVar1;
              }
            }
          }
        }
      }
    }
  }
LAB_035d2fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CJHGBHKNDHN(Model CJNHFNHJHPE)  [RVA 0x34D2FE4]
// ActionAnimation$$CJHGBHKNDHN @ RVA 0x34D2FE4

void ActionAnimation__CJHGBHKNDHN(ActionAnimation_o *__this,Model_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HKPEJNKNEGG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public ActionAnimation.JAGIKBINGJI NHGGBEACKBD()  [RVA 0x34D2FEC]
// ActionAnimation$$NHGGBEACKBD @ RVA 0x34D2FEC

int32_t ActionAnimation__NHGGBEACKBD(ActionAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public bool KOLIFGAJOHA(EventAnimation.MIFHAKDMDJH ACCIHBHMFPN, InfoAnimation NLEBDPHNIDI, Model BCKBBGCOMJD)  [RVA 0x34D2FFC]
// ActionAnimation$$KOLIFGAJOHA @ RVA 0x34D2FFC

bool ActionAnimation__KOLIFGAJOHA
               (ActionAnimation_o *__this,int32_t ACCIHBHMFPN,InfoAnimation_o *NLEBDPHNIDI,
               Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  
  if (((__this->fields).NPGJDANOMIK == 1) && ((__this->fields).BGOHEOKLMHD == ACCIHBHMFPN)) {
    bVar1 = ActionAnimation__BNNIDPDMOIL(__this,NLEBDPHNIDI,BCKBBGCOMJD,(MethodInfo *)BCKBBGCOMJD);
    return bVar1;
  }
  return false;
}


// ===== public Model BBGBNLKMBMG()  [RVA 0x34D3028]
// ActionAnimation$$BBGBNLKMBMG @ RVA 0x34D3028

Model_o * ActionAnimation__BBGBNLKMBMG(ActionAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._HKPEJNKNEGG_k__BackingField;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x34D3030]
// ActionAnimation$$RandomizeObscuredVars @ RVA 0x34D3030

void ActionAnimation__RandomizeObscuredVars(ActionAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== protected virtual void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34D303C]
// ActionAnimation$$HNIHOIAMDPC @ RVA 0x34D303C

/* WARNING: Removing unreachable block (ram,0x035d34d0) */

void ActionAnimation__HNIHOIAMDPC
               (ActionAnimation_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar9;
  undefined8 *puVar10;
  ConditionAnimation_o *item;
  long lVar11;
  ConditionAnimation_array *pIVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar15;
  
  if ((DAT_045686c5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_6575/*"Frame"*/);
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_5982/*"Event"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045686c5 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_6575/*"Frame"*/,(MethodInfo *)0x0);
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar4,StringLiteral_5982/*"Event"*/,(MethodInfo *)0x0);
      if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
        (__this->fields).NPGJDANOMIK = 0;
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,1,(MethodInfo *)0x0);
        (__this->fields).EMPEBPJNGKP = iVar3;
      }
      else {
        (__this->fields).NPGJDANOMIK = 1;
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        iVar3 = EventAnimation__JHNNNBIFHDI(pSVar6,(MethodInfo *)0x0);
        (__this->fields).BGOHEOKLMHD = iVar3;
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
        iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar6,(MethodInfo *)0x0);
        (__this->fields).LOAFPIOGJAF = iVar3;
        pSVar7 = EIABCPKDEBD__IJPOFDDHAAF(AHDGNOJPPIB,StringLiteral_4577/*"Conditions"*/,(MethodInfo *)0x0);
        if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
          return;
        }
        plVar8 = (long *)(*(pSVar7->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          pSVar9 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar9,iVar3,
                     Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
          ppSVar15 = &(__this->fields).KDIMDBHMBEM;
          *ppSVar15 = pSVar9;
          thunk_FUN_01c20e04(ppSVar15,pSVar9);
          plVar8 = (long *)(*(pSVar7->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (pSVar7,(pSVar7->klass->vtable)._13_get_ChildNodes.method);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar11 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_035d3308;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_035d3308:
              uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              if ((uVar13 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) {
                  return;
                }
                lVar11 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 == 0) goto LAB_035d3478;
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_035d3460;
              }
              lVar11 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_035d3368;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1)
              ;
LAB_035d3368:
              pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar8,puVar10[1]);
              if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64();
                }
              }
              item = ConditionsParser__EOHMFJFFFIN(pSVar7,(MethodInfo *)0x0);
              if (item != (ConditionAnimation_o *)0x0) {
                (*(item->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                          (item,AHDGNOJPPIB,(item->klass->vtable)._7_HNIHOIAMDPC.method);
                lVar11 = Method_System_Collections_Generic_List<ConditionAnimation>_Add__;
                pSVar9 = *ppSVar15;
                if (pSVar9 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar12 = (pSVar9->fields)._items;
                (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                if (pIVar12 == (ConditionAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar9->fields)._size;
                if (uVar2 < (uint)pIVar12->max_length) {
                  (pSVar9->fields)._size = uVar2 + 1;
                  pIVar12->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar2,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar9,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_035d3460:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_035d3494;
    }
  }
LAB_035d3478:
  puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_035d3494:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  return;
}


// ===== public bool KOLIFGAJOHA(int PKDBOMAHGHC, InfoAnimation NLEBDPHNIDI, Model BCKBBGCOMJD)  [RVA 0x34D35A4]
// ActionAnimation$$KOLIFGAJOHA @ RVA 0x34D35A4

bool ActionAnimation__KOLIFGAJOHA
               (ActionAnimation_o *__this,int32_t PKDBOMAHGHC,InfoAnimation_o *NLEBDPHNIDI,
               Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  
  if (((__this->fields).NPGJDANOMIK == 0) && ((__this->fields).EMPEBPJNGKP == PKDBOMAHGHC)) {
    bVar1 = ActionAnimation__BNNIDPDMOIL(__this,NLEBDPHNIDI,BCKBBGCOMJD,(MethodInfo *)BCKBBGCOMJD);
    return bVar1;
  }
  return false;
}


// ===== public void .ctor(ActionAnimation.JAGIKBINGJI ACCIHBHMFPN)  [RVA 0x34D35CC]
// ActionAnimation$$.ctor @ RVA 0x34D35CC

void ActionAnimation___ctor(ActionAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Model_o **ppOVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(ACCIHBHMFPN,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields)._HKPEJNKNEGG_k__BackingField;
  *ppOVar1 = (Model_o *)0x0;
  (__this->fields).JDNKKGPNHPB.fields = CVar2;
  thunk_FUN_01c20e04(ppOVar1,0);
  return;
}


// ===== public virtual void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x34D360C]
// ActionAnimation$$DPGIIHOJJDE @ RVA 0x34D360C

void ActionAnimation__DPGIIHOJJDE(ActionAnimation_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

