// TypeDefIndex 2011
// Namespace: 
// public abstract class ILGLOCBJFEG : HDBNGIBFEBA
// Fields:
//   protected object IGMDDJFPIJL; // 0x20
//   private ObscuredInt JDNKKGPNHPB; // 0x28

// ===== public void .ctor()  [RVA 0x32963F0]
// ILGLOCBJFEG$$.ctor @ RVA 0x32963F0

void ILGLOCBJFEG___ctor(ILGLOCBJFEG_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  HDBNGIBFEBA___ctor((HDBNGIBFEBA_o *)__this,(MethodInfo *)0x0);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public ILGLOCBJFEG.PFGDFECKALC NHGGBEACKBD()  [RVA 0x3296438]
// ILGLOCBJFEG$$NHGGBEACKBD @ RVA 0x3296438

int32_t ILGLOCBJFEG__NHGGBEACKBD(ILGLOCBJFEG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static List<ILGLOCBJFEG> EOHMFJFFFIN(XmlNode AHDGNOJPPIB, HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x3296448]
// ILGLOCBJFEG$$EOHMFJFFFIN @ RVA 0x3296448

/* WARNING: Removing unreachable block (ram,0x03396e70) */

System_Collections_Generic_List_ILGLOCBJFEG__o *
ILGLOCBJFEG__EOHMFJFFFIN
          (System_Xml_XmlNode_o *AHDGNOJPPIB,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_String_o *pSVar9;
  OENOCOMOCDF_o *__this_00;
  HEFOANCOHDC_o **ppHVar10;
  long lVar11;
  ILGLOCBJFEG_array *pIVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_0456736d & 1) == 0) {
    FUN_01bab630(&AJPFDGPLELD_TypeInfo);
    FUN_01bab630(&BGKIJKALIHG_TypeInfo);
    FUN_01bab630(&BHHOLHDJKLE_TypeInfo);
    FUN_01bab630(&BLFFMBFLIMI_TypeInfo);
    FUN_01bab630(&CLENFJMNFPJ_TypeInfo);
    FUN_01bab630(&FIBPEPMPJDI_TypeInfo);
    FUN_01bab630(&FPJMBGMBAOF_TypeInfo);
    FUN_01bab630(&ICNKJCHMODO_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo);
    FUN_01bab630(&MBPDNOIIDLP_TypeInfo);
    FUN_01bab630(&MIKDEPBOGDN_TypeInfo);
    FUN_01bab630(&MPLCLLIIECE_TypeInfo);
    FUN_01bab630(&NFPLLJHOKHA_TypeInfo);
    FUN_01bab630(&OCHEHJACAPI_TypeInfo);
    FUN_01bab630(&OENOCOMOCDF_TypeInfo);
    FUN_01bab630(&OHPOPCKPNDL_TypeInfo);
    FUN_01bab630(&PEMLCAHDJBA_TypeInfo);
    FUN_01bab630(&PLNJDKGMELH_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    FUN_01bab630(&StringLiteral_12495/*"Style"*/);
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    FUN_01bab630(&StringLiteral_11439/*"RoundStage"*/);
    FUN_01bab630(&StringLiteral_8777/*"MagicCharge"*/);
    FUN_01bab630(&StringLiteral_3603/*"Bullets"*/);
    FUN_01bab630(&StringLiteral_7059/*"Health"*/);
    FUN_01bab630(&StringLiteral_4940/*"CurrentAnimation"*/);
    FUN_01bab630(&StringLiteral_10091/*"Pain"*/);
    FUN_01bab630(&StringLiteral_10233/*"PerkStart"*/);
    FUN_01bab630(&StringLiteral_9145/*"ModExists"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_4945/*"CurrentInterval"*/);
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    FUN_01bab630(&StringLiteral_7430/*"InTheArea"*/);
    DAT_0456736d = 1;
  }
  __this = (System_Collections_Generic_List_ILGLOCBJFEG__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return __this;
  }
  plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033966cc:
  lVar11 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03396718;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03396718:
  uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar13 & 1) == 0) {
    plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
    if (plVar6 == (long *)0x0) {
      return __this;
    }
    lVar11 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 == 0) goto LAB_03396e08;
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    goto LAB_03396df0;
  }
  lVar11 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03396778;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03396778:
  plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
  if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
     (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
      System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(plVar8);
  }
  pSVar9 = (System_String_o *)
           (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  iVar4 = NILLKLHKLHG__EOGEJOBHJMC(pSVar9,(MethodInfo *)0x0);
  if (iVar4 != 0) {
    __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(NFPLLJHOKHA_TypeInfo);
    NFPLLJHOKHA___ctor((NFPLLJHOKHA_o *)__this_00,(MethodInfo *)0x0);
    goto LAB_033967ec;
  }
  uVar5 = <PrivateImplementationDetails>__ComputeStringHash(pSVar9,(MethodInfo *)0x0);
  if (uVar5 < 0x5467ec77) {
    if (uVar5 < 0x21e5581e) {
      if (uVar5 < 0x15f4a5c9) {
        if (uVar5 == 0xe2a438f) {
          bVar3 = System_String__op_Equality(pSVar9,StringLiteral_4945/*"CurrentInterval"*/,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(AJPFDGPLELD_TypeInfo);
            AJPFDGPLELD___ctor((AJPFDGPLELD_o *)__this_00,(MethodInfo *)0x0);
            goto LAB_033967ec;
          }
          goto LAB_033966cc;
        }
        if ((uVar5 != 0x15f4a5c8) ||
           (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_8777/*"MagicCharge"*/,(MethodInfo *)0x0), !bVar3)
           ) goto LAB_033966cc;
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(FPJMBGMBAOF_TypeInfo);
        FPJMBGMBAOF___ctor((FPJMBGMBAOF_o *)__this_00,(MethodInfo *)0x0);
      }
      else if (uVar5 == 0x1f648006) {
        bVar3 = System_String__op_Equality(pSVar9,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_033966cc;
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(OENOCOMOCDF_TypeInfo);
        OENOCOMOCDF___ctor(__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar5 != 0x21e5581d) ||
           (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0), !bVar3)
           ) goto LAB_033966cc;
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(FIBPEPMPJDI_TypeInfo);
        FIBPEPMPJDI___ctor((FIBPEPMPJDI_o *)__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar5 < 0x31fd1e88) {
      if (uVar5 == 0x27a68ed7) {
        bVar3 = System_String__op_Equality(pSVar9,StringLiteral_11439/*"RoundStage"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_033966cc;
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(PEMLCAHDJBA_TypeInfo);
        PEMLCAHDJBA___ctor((PEMLCAHDJBA_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar5 != 0x31fd1e87) ||
           (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_10233/*"PerkStart"*/,(MethodInfo *)0x0), !bVar3
           )) goto LAB_033966cc;
        if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (EIKFGOCCOIE->fields).JIJLBFGKNJK;
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(CLENFJMNFPJ_TypeInfo);
        CLENFJMNFPJ___ctor((CLENFJMNFPJ_o *)__this_00,pSVar9,(MethodInfo *)0x0);
      }
    }
    else if (uVar5 == 0x4115d182) {
      bVar3 = System_String__op_Equality(pSVar9,StringLiteral_10999/*"Random"*/,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_033966cc;
      __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(OHPOPCKPNDL_TypeInfo);
      OHPOPCKPNDL___ctor((OHPOPCKPNDL_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((uVar5 != 0x5467ec76) ||
         (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_12495/*"Style"*/,(MethodInfo *)0x0), !bVar3))
      goto LAB_033966cc;
      __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(BLFFMBFLIMI_TypeInfo);
      BLFFMBFLIMI___ctor((BLFFMBFLIMI_o *)__this_00,(MethodInfo *)0x0);
    }
  }
  else if (uVar5 < 0x986145b0) {
    if (uVar5 < 0x7b5a42d9) {
      if (uVar5 == 0x6aa8d184) {
        bVar3 = System_String__op_Equality(pSVar9,StringLiteral_7430/*"InTheArea"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(BGKIJKALIHG_TypeInfo);
          BGKIJKALIHG___ctor((BGKIJKALIHG_o *)__this_00,(MethodInfo *)0x0);
          goto LAB_033967ec;
        }
        goto LAB_033966cc;
      }
      if ((uVar5 != 0x7b5a42d8) ||
         (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_4940/*"CurrentAnimation"*/,(MethodInfo *)0x0), !bVar3))
      goto LAB_033966cc;
      __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(OCHEHJACAPI_TypeInfo);
      OCHEHJACAPI___ctor((OCHEHJACAPI_o *)__this_00,(MethodInfo *)0x0);
    }
    else if (uVar5 == 0x83cd7fa1) {
      bVar3 = System_String__op_Equality(pSVar9,StringLiteral_4507/*"Combo"*/,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_033966cc;
      __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(PLNJDKGMELH_TypeInfo);
      PLNJDKGMELH___ctor((PLNJDKGMELH_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((uVar5 != 0x986145af) ||
         (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_7059/*"Health"*/,(MethodInfo *)0x0), !bVar3))
      goto LAB_033966cc;
      __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(BHHOLHDJKLE_TypeInfo);
      BHHOLHDJKLE___ctor((BHHOLHDJKLE_o *)__this_00,(MethodInfo *)0x0);
    }
  }
  else {
    if (0xef2404b5 < uVar5) {
      if (uVar5 == 0xf1c31933) goto LAB_03396d7c;
      if ((uVar5 == 0xf4c753db) &&
         (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0), bVar3))
      {
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(MPLCLLIIECE_TypeInfo);
        MPLCLLIIECE___ctor((MPLCLLIIECE_o *)__this_00,(MethodInfo *)0x0);
        goto LAB_033967ec;
      }
      goto LAB_033966cc;
    }
    if (uVar5 == 0xb29f105e) {
      bVar3 = System_String__op_Equality(pSVar9,StringLiteral_3603/*"Bullets"*/,(MethodInfo *)0x0);
      if (bVar3) {
        __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(MIKDEPBOGDN_TypeInfo);
        MIKDEPBOGDN___ctor((MIKDEPBOGDN_o *)__this_00,(MethodInfo *)0x0);
        goto LAB_033967ec;
      }
      goto LAB_033966cc;
    }
    if ((uVar5 != 0xef2404b5) ||
       (bVar3 = System_String__op_Equality(pSVar9,StringLiteral_10091/*"Pain"*/,(MethodInfo *)0x0), !bVar3))
    goto LAB_033966cc;
    __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(ICNKJCHMODO_TypeInfo);
    ICNKJCHMODO___ctor((ICNKJCHMODO_o *)__this_00,(MethodInfo *)0x0);
  }
  goto LAB_033967ec;
LAB_03396d7c:
  bVar3 = System_String__op_Equality(pSVar9,StringLiteral_9145/*"ModExists"*/,(MethodInfo *)0x0);
  if (!bVar3) goto LAB_033966cc;
  __this_00 = (OENOCOMOCDF_o *)thunk_FUN_01bda818(MBPDNOIIDLP_TypeInfo);
  MBPDNOIIDLP___ctor((MBPDNOIIDLP_o *)__this_00,(MethodInfo *)0x0);
LAB_033967ec:
  if (__this_00 != (OENOCOMOCDF_o *)0x0) {
    ppHVar10 = &(((IALJKCECCLB_Fields *)&(__this_00->fields).super)->super).super.
                _MEFGNAIILBJ_k__BackingField;
    *ppHVar10 = EIKFGOCCOIE;
    thunk_FUN_01c20e04(ppHVar10,EIKFGOCCOIE);
    (*(((NFPLLJHOKHA_c *)__this_00->klass)->vtable)._4_HNIHOIAMDPC.methodPtr)
              (__this_00,plVar8,(((NFPLLJHOKHA_c *)__this_00->klass)->vtable)._4_HNIHOIAMDPC.method)
    ;
    lVar11 = Method_System_Collections_Generic_List<ILGLOCBJFEG>_Add__;
    if (__this == (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar12 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pIVar12 == (ILGLOCBJFEG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pIVar12->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pIVar12->m_Items[(int)uVar2] = (ILGLOCBJFEG_o *)__this_00;
      thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_033966cc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03396df0:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03396e24;
    }
  }
LAB_03396e08:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03396e24:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}


// ===== protected OLKKAIFGGAK EMHAFDFJFIA(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3296FF8]
// ILGLOCBJFEG$$EMHAFDFJFIA @ RVA 0x3296FF8

OLKKAIFGGAK_o *
ILGLOCBJFEG__EMHAFDFJFIA(ILGLOCBJFEG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).super.BEMCNJHEADJ;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BCKBBGCOMJD = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
    }
    else {
      BCKBBGCOMJD = (OLKKAIFGGAK_o *)0x0;
    }
  }
  return BCKBBGCOMJD;
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x3297030]
// ILGLOCBJFEG$$RandomizeObscuredVars @ RVA 0x3297030

void ILGLOCBJFEG__RandomizeObscuredVars(ILGLOCBJFEG_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== protected void GNLPNKGBAFL(ILGLOCBJFEG.PFGDFECKALC CJNHFNHJHPE)  [RVA 0x3296418]
// ILGLOCBJFEG$$GNLPNKGBAFL @ RVA 0x3296418

void ILGLOCBJFEG__GNLPNKGBAFL(ILGLOCBJFEG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}

