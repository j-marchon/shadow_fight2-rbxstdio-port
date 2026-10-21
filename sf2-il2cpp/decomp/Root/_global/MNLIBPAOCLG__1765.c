// TypeDefIndex 1765
// Namespace: 
// public class MNLIBPAOCLG
// Fields:
//   private const float MBFFDBDNDPO = 300;
//   private const string NOAGNHCJJAG = "Textures/fight/pointers/arrow";
//   private const string JJKKNMCMPAI = "Textures/fight/pointers/arrowSecondPlayer";
//   private const float KNIFGCNDFFK = 10;
//   private const float ALLEOHHLDCD = 45;
//   private static Texture2D OEPIDHMGLGA; // 0x0
//   private SpriteRenderer NGMNLILMJAP; // 0x10
//   private SpriteRenderer JFILNBPGNKO; // 0x18
//   private SpriteRenderer JNBHKOBOIMD; // 0x20
//   private int DOGMHNFPALG; // 0x28
//   private GameObject EHBIBHGMKGD; // 0x30
//   private MEHKKHFBNLM DDDKDGIEBFP; // 0x38
//   private GameObject BAKAPMIJMEN; // 0x40
//   private CocosAnimation JFHJBGJOPME; // 0x48
//   private GMGALNFPLPA EILFIPKJKKI; // 0x50
//   private GMGALNFPLPA ACOIDPEGKIP; // 0x58
//   private bool JBHKLPKKJNA; // 0x60
//   private float FIGDMPIMECD; // 0x64
//   private float LIPPNBNMMIH; // 0x68
//   private float PFPLKPNJDHD; // 0x6C
//   private float GGOLFKNHHFD; // 0x70
//   private float CPMMFFBNDHP; // 0x74
//   private float AOKLLOKEKIK; // 0x78
//   private float PMDCNOONOFF; // 0x7C
//   private float JCGOCJAFNOF; // 0x80
//   private bool FBHJEKLCEOC; // 0x84
//   private float EIKNANMFNBJ; // 0x88
//   private float BIBDPIEOEHF; // 0x8C
//   public NHBBOEHHEKG CNHHLPPHNCO; // 0x90
//   public KHEDNGODOIC ANDGPHHMNMC; // 0x98
//   private List<KBECBDOOHCO> GHLEJFDLGHM; // 0xA0
//   private int MNJAAGGNAKE; // 0xA8
//   private GameObject LDAKOINICNJ; // 0xB0

// ===== public void DFEBCLGNDBG(CNDPAJOLKFN BMPFMJFIANG, CNDPAJOLKFN ABICHGGFIOD, PKHLGDMJPMF GDIJMKKLDPH, PKHLGDMJPMF JCCPCMIMDGF, float JKOJPEKLBCI = 0)  [RVA 0x31E70E4]
// MNLIBPAOCLG$$DFEBCLGNDBG @ RVA 0x31E70E4

void MNLIBPAOCLG__DFEBCLGNDBG
               (MNLIBPAOCLG_o *__this,CNDPAJOLKFN_o *BMPFMJFIANG,CNDPAJOLKFN_o *ABICHGGFIOD,
               PKHLGDMJPMF_o *GDIJMKKLDPH,PKHLGDMJPMF_o *JCCPCMIMDGF,float JKOJPEKLBCI,
               MethodInfo *method)

{
  MGNPHCAAEIO_c *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  MNLIBPAOCLG_o *__this_02;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_03;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NHBBOEHHEKG_o *pNVar4;
  MGNPHCAAEIO_CEMCIPLHMKD_o *pMVar5;
  MEHKKHFBNLM_o *pMVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)BMPFMJFIANG;
  if ((DAT_04566d6f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
                    /* try { // try from 032e7134 to 033e723b has its CatchHandler @ 032e7134
                       catch() { ... } // from try @ 032e7134 with catch @ 032e7134
                       catch() { ... } // from try @ 032e72d4 with catch @ 032e7134
                       catch() { ... } // from try @ 032e7358 with catch @ 032e7134
                       catch() { ... } // from try @ 032e73f4 with catch @ 032e7134 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566d6f = 1;
    method_00 = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pNVar4 = (__this->fields).CNHHLPPHNCO;
  if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) && (BMPFMJFIANG != (CNDPAJOLKFN_o *)0x0)) {
    (__this->fields).PMDCNOONOFF =
         (pNVar4->fields).NMFKJBOAOLK * 0.5 - (BMPFMJFIANG->fields).super.OHHDBINAJCB;
    if (JKOJPEKLBCI <= 0.0) {
      JKOJPEKLBCI = MNLIBPAOCLG__EPJCHCHDJCE(__this,method_00);
      method_00 = extraout_x1_00;
    }
    (__this->fields).FIGDMPIMECD = JKOJPEKLBCI;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_01;
    }
    if (DAT_04566ab3 == '\0') {
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
      DAT_04566ab3 = '\x01';
      method_00 = extraout_x1_02;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_03;
    }
    pMVar5 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
    if (pMVar5 != (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) {
      fVar7 = 1.0;
      if (0.0 < (pMVar5->fields).MMDEBECMCJE) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_04;
        }
        if (DAT_04566ab3 == '\0') {
          FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
          DAT_04566ab3 = '\x01';
          method_00 = extraout_x1_05;
        }
                    /* try { // try from 032e723c to 033e7263 has its CatchHandler @ 032e736c */
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_06;
        }
        pMVar5 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
        if ((pMVar5 == (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) ||
           (pNVar4 = (__this->fields).CNHHLPPHNCO, pNVar4 == (NHBBOEHHEKG_o *)0x0))
        goto LAB_032e7610;
        fVar7 = (pMVar5->fields).MMDEBECMCJE / (pNVar4->fields).NMFKJBOAOLK;
      }
      __this_00 = MGNPHCAAEIO_TypeInfo;
      fVar7 = (__this->fields).AOKLLOKEKIK / fVar7;
      if ((__this->fields).FIGDMPIMECD < fVar7) {
        (__this->fields).FIGDMPIMECD = fVar7;
        if ((GDIJMKKLDPH == (PKHLGDMJPMF_o *)0x0) ||
           (pNVar4 = (__this->fields).CNHHLPPHNCO, pNVar4 == (NHBBOEHHEKG_o *)0x0))
        goto LAB_032e7610;
                    /* try { // try from 032e7298 to 033e72c3 has its CatchHandler @ 032e7368 */
        fVar10 = (__this->fields).PMDCNOONOFF;
        fVar9 = ((__this->fields).CPMMFFBNDHP / fVar7) * 0.5;
                    /* try { // try from 032e72c4 to 033e72d3 has its CatchHandler @ 032e7364 */
        fVar7 = MNLIBPAOCLG__AGFGNAOHOJF
                          ((MNLIBPAOCLG_o *)__this_00,fVar9,
                           fVar10 + (GDIJMKKLDPH->fields).OHHDBINAJCB +
                                    (pNVar4->fields).NMFKJBOAOLK * -0.5,(__this->fields).EIKNANMFNBJ
                           ,method_00);
        if ((JCCPCMIMDGF == (PKHLGDMJPMF_o *)0x0) ||
           (pNVar4 = (__this->fields).CNHHLPPHNCO, pNVar4 == (NHBBOEHHEKG_o *)0x0))
        goto LAB_032e7610;
                    /* try { // try from 032e72d4 to 033e7353 has its CatchHandler @ 032e7134 */
        fVar9 = MNLIBPAOCLG__AGFGNAOHOJF
                          (__this_02,fVar9,
                           fVar10 + (JCCPCMIMDGF->fields).OHHDBINAJCB +
                                    (pNVar4->fields).NMFKJBOAOLK * -0.5,(__this->fields).BIBDPIEOEHF
                           ,method_01);
        fVar7 = fVar7 + (__this->fields).PMDCNOONOFF;
        (__this->fields).PMDCNOONOFF = fVar7;
        if (0.0 < (__this->fields).BIBDPIEOEHF) {
          (__this->fields).PMDCNOONOFF = fVar9 + fVar7;
        }
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566ab3 == '\0') {
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_04566ab3 = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032e7354 to 033e7357 has its CatchHandler @ 032e7360 */
        thunk_FUN_01ba7564();
                    /* try { // try from 032e7358 to 033e7383 has its CatchHandler @ 032e7134 */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e7354 with catch @ 032e7360
                        */
      pMVar5 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e72c4 with catch @ 032e7364
                        */
      if (pMVar5 != (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e7298 with catch @ 032e7368
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e723c with catch @ 032e736c
                        */
        if ((__this->fields).JBHKLPKKJNA == false) {
          fVar7 = (__this->fields).FIGDMPIMECD;
          fVar9 = (__this->fields).AOKLLOKEKIK;
                    /* try { // try from 032e7384 to 033e7387 has its CatchHandler @ 032e7394 */
          if (fVar7 <= fVar9) {
            fVar7 = fVar9;
          }
        }
        else {
          fVar7 = (__this->fields).AOKLLOKEKIK;
        }
        pNVar4 = (__this->fields).CNHHLPPHNCO;
        fVar9 = (pMVar5->fields).HGMJNJHLJLH;
        (__this->fields).FIGDMPIMECD = fVar7;
                    /* catch() { ... } // from try @ 032e7384 with catch @ 032e7394 */
        if (pNVar4 != (NHBBOEHHEKG_o *)0x0) {
          fVar7 = ((pNVar4->fields).NMFKJBOAOLK - fVar9) * fVar7 * 0.5 -
                  (__this->fields).CPMMFFBNDHP * 0.5;
                    /* try { // try from 032e73cc to 033e73f3 has its CatchHandler @ 032e7408 */
          bVar1 = Util__JFJCDAJGFKD((__this->fields).EIKNANMFNBJ,0.0,1e-10,(MethodInfo *)0x0);
          if ((bVar1) ||
             (bVar1 = Util__JFJCDAJGFKD((__this->fields).BIBDPIEOEHF,0.0,1e-10,(MethodInfo *)0x0),
             bVar1)) {
                    /* try { // try from 032e73f4 to 033e73ff has its CatchHandler @ 032e7134 */
            fVar9 = (__this->fields).PMDCNOONOFF * (__this->fields).FIGDMPIMECD;
            (__this->fields).PMDCNOONOFF = fVar9;
                    /* try { // try from 032e7400 to 033e7407 has its CatchHandler @ 032e7408 */
          }
          else {
            fVar9 = (__this->fields).PMDCNOONOFF;
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e73cc with catch @ 032e7408
                       catch(type#2 @ 00000000) { ... } // from try @ 032e7400 with catch @ 032e7408
                        */
          pNVar4 = (__this->fields).CNHHLPPHNCO;
          fVar10 = fVar7;
          if (fVar9 <= fVar7) {
            fVar10 = fVar9;
          }
          if (fVar9 < -fVar7) {
            fVar10 = -fVar7;
          }
          (__this->fields).PMDCNOONOFF = fVar10;
          if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) &&
             (__this_03 = (pNVar4->fields).JDLKPFCELNF,
             __this_03 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_98,(System_Collections_Generic_List_object__o *)__this_03,
                       Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
            local_80.fields._index = local_98.fields._index;
            local_80.fields._version = local_98.fields._version;
            local_80.fields._list = local_98.fields._list;
            local_80.fields._current = local_98.fields._current;
            while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_80,
                                      Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__
                                     ), __this_01 = local_80.fields._current, bVar1) {
              if ((MEHKKHFBNLM_o *)local_80.fields._current == (MEHKKHFBNLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = MEHKKHFBNLM__BFBBBJOMGJA
                                ((MEHKKHFBNLM_o *)local_80.fields._current,(MethodInfo *)0x0);
              if ((bVar1) ||
                 (((MEHKKHFBNLM_Fields *)((long)__this_01 + 0x10))->FODLFBLPPBF != false)) {
                MEHKKHFBNLM__MHEKOCOGKEE
                          ((MEHKKHFBNLM_o *)__this_01,(__this->fields).FIGDMPIMECD,(MethodInfo *)0x0
                          );
              }
              else {
                MEHKKHFBNLM__FGGIFIGBPBI
                          ((MEHKKHFBNLM_o *)__this_01,
                           (__this->fields).GGOLFKNHHFD * (1.0 - (__this->fields).FIGDMPIMECD),
                           (MethodInfo *)0x0);
              }
              MEHKKHFBNLM__KEBABBALAME
                        ((MEHKKHFBNLM_o *)__this_01,
                         (__this->fields).PMDCNOONOFF *
                         ((MEHKKHFBNLM_Fields *)((long)__this_01 + 0x10))->JHLJELAKADM,
                         (MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
            pNVar4 = (__this->fields).CNHHLPPHNCO;
            if ((((pNVar4 != (NHBBOEHHEKG_o *)0x0) && (GDIJMKKLDPH != (PKHLGDMJPMF_o *)0x0)) &&
                (pMVar6 = (pNVar4->fields).CLFNHGGJHCA, pMVar6 != (MEHKKHFBNLM_o *)0x0)) &&
               (pUVar2 = (pMVar6->fields)._KDDKJJLDFFO_k__BackingField,
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              fVar7 = (__this->fields).PMDCNOONOFF;
              fVar9 = (pNVar4->fields).NMFKJBOAOLK;
              fVar10 = (GDIJMKKLDPH->fields).OHHDBINAJCB;
              fVar11 = (__this->fields).FIGDMPIMECD;
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                UVar12 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
                fVar8 = (__this->fields).GGOLFKNHHFD;
                fVar8 = (UVar12.fields.y - (fVar8 + fVar8) * (__this->fields).FIGDMPIMECD) + -10.0;
                MNLIBPAOCLG__HKFCHIGNFHM
                          (__this,(__this->fields).NGMNLILMJAP,
                           fVar7 - (fVar9 * 0.5 - fVar10) * fVar11,fVar8,(MethodInfo *)ABICHGGFIOD);
                if ((__this->fields).FBHJEKLCEOC != false) {
                  pNVar4 = (__this->fields).CNHHLPPHNCO;
                  if ((pNVar4 == (NHBBOEHHEKG_o *)0x0) || (JCCPCMIMDGF == (PKHLGDMJPMF_o *)0x0))
                  goto LAB_032e7610;
                  MNLIBPAOCLG__HKFCHIGNFHM
                            (__this,(__this->fields).JFILNBPGNKO,
                             (__this->fields).PMDCNOONOFF -
                             ((pNVar4->fields).NMFKJBOAOLK * 0.5 - (JCCPCMIMDGF->fields).OHHDBINAJCB
                             ) * (__this->fields).FIGDMPIMECD,fVar8,(MethodInfo *)ABICHGGFIOD);
                }
                pUVar2 = (__this->fields).LDAKOINICNJ;
                if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                  fVar7 = (__this->fields).PMDCNOONOFF;
                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                    (__this->fields).PFPLKPNJDHD =
                         fVar7 + UVar12.fields.x * (__this->fields).FIGDMPIMECD;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032e7610:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ECPBBMDOEKB(byte[] CLNMDFIMKAK)  [RVA 0x31E795C]
// MNLIBPAOCLG$$ECPBBMDOEKB @ RVA 0x31E795C

void MNLIBPAOCLG__ECPBBMDOEKB
               (MNLIBPAOCLG_o *__this,System_Byte_array *CLNMDFIMKAK,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  NHBBOEHHEKG_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  MEHKKHFBNLM_o *pMVar4;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar5;
  
  if ((DAT_04566d70 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
    DAT_04566d70 = 1;
  }
  pNVar3 = (__this->fields).CNHHLPPHNCO;
  if (pNVar3 != (NHBBOEHHEKG_o *)0x0) {
    NHBBOEHHEKG__ECPBBMDOEKB(pNVar3,CLNMDFIMKAK,(MethodInfo *)0x0);
    pMVar4 = (__this->fields).DDDKDGIEBFP;
    if (pMVar4 == (MEHKKHFBNLM_o *)0x0) {
      return;
    }
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (((pNVar3 != (NHBBOEHHEKG_o *)0x0) &&
        (pSVar5 = (pNVar3->fields).JDLKPFCELNF,
        pSVar5 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) &&
       (CLNMDFIMKAK != (System_Byte_array *)0x0)) {
      uVar2 = (pSVar5->fields)._size;
      uVar1 = (uint)CLNMDFIMKAK->max_length;
      if ((int)uVar1 <= (int)uVar2) {
        return;
      }
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = (pMVar4->fields)._KDDKJJLDFFO_k__BackingField;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive
                  (__this_00,CLNMDFIMKAK->m_Items[(int)uVar2] != 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KCHJHDCDKGB(Color EFJKPCADGJH)  [RVA 0x31E7A10]
// MNLIBPAOCLG$$KCHJHDCDKGB @ RVA 0x31E7A10

void MNLIBPAOCLG__KCHJHDCDKGB
               (MNLIBPAOCLG_o *__this,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Sprite_o *value;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  NHBBOEHHEKG_o *pNVar4;
  MEHKKHFBNLM_o *pMVar5;
  UnityEngine_SpriteRenderer_o **ppUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  UnityEngine_Texture2D_o *pUVar8;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if ((DAT_04566d71 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&MNLIBPAOCLG_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Texture2D_TypeInfo);
    FUN_01bab630(&StringLiteral_5103/*"DarknessPicture"*/);
    DAT_04566d71 = 1;
    method = extraout_x1;
  }
  ppUVar6 = &(__this->fields).JNBHKOBOIMD;
  pUVar7 = *ppUVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixel(pUVar8,0,0,EFJKPCADGJH,(MethodInfo *)0x0);
      pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
      if (pUVar8 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar8,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_032e7d44;
  }
  pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (UnityEngine_Texture2D_o *)thunk_FUN_01bda818(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor(pUVar8,1,1,(MethodInfo *)0x0);
    MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA = pUVar8;
    thunk_FUN_01c20e04(MNLIBPAOCLG_TypeInfo->static_fields,pUVar8);
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) goto LAB_032e7d44;
    UnityEngine_Texture2D__SetPixel(pUVar8,0,0,EFJKPCADGJH,(MethodInfo *)0x0);
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) goto LAB_032e7d44;
    UnityEngine_Texture2D__Apply(pUVar8,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar2,StringLiteral_5103/*"DarknessPicture"*/,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    *ppUVar6 = pUVar7;
    thunk_FUN_01c20e04(ppUVar6,pUVar7);
    pUVar7 = *ppUVar6;
    value = UnityEngine_Sprite__Create
                      (MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA,
                       (UnityEngine_Rect_o)(ZEXT816(0x3f8000003f800000) << 0x40),
                       (UnityEngine_Vector2_o)0x3f0000003f000000,1.0,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_SpriteRenderer__set_sprite(pUVar7,value,(MethodInfo *)0x0);
      if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
        value_00.fields.b = 1.0;
        value_00.fields.r = 1.0;
        value_00.fields.g = 1.0;
        value_00.fields.a = 0.0;
        UnityEngine_SpriteRenderer__set_color(*ppUVar6,value_00,(MethodInfo *)0x0);
        if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).CNHHLPPHNCO;
          if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) && (pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            value_01.fields.y = (pNVar4->fields).DAPHCPICAAC * 3.0;
            value_01.fields.x = (pNVar4->fields).NMFKJBOAOLK * 1.5;
            value_01.fields.z = 0.0;
            UnityEngine_Transform__set_localScale(pUVar3,value_01,(MethodInfo *)0x0);
            if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
              pMVar5 = (__this->fields).DDDKDGIEBFP;
              if (((pMVar5 != (MEHKKHFBNLM_o *)0x0) &&
                  (pUVar2 = (pMVar5->fields)._KDDKJJLDFFO_k__BackingField,
                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
                 (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
                if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
                  Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032e7d44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CAOJFFBJOCG(bool CJNHFNHJHPE)  [RVA 0x31E7D48]
// MNLIBPAOCLG$$CAOJFFBJOCG @ RVA 0x31E7D48

void MNLIBPAOCLG__CAOJFFBJOCG(MNLIBPAOCLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Sprite_o *value;
  
  if ((DAT_04566d72 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_12936/*"Textures/fight/pointers/arrowSecondPlayer"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d72 = 1;
  }
  pUVar1 = (__this->fields).JFILNBPGNKO;
  (__this->fields).FBHJEKLCEOC = CJNHFNHJHPE;
  if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!CJNHFNHJHPE) {
      return;
    }
    pUVar1 = (__this->fields).NGMNLILMJAP;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1/*""*/,StringLiteral_12936/*"Textures/fight/pointers/arrowSecondPlayer"*/,false,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_SpriteRenderer__set_sprite(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float AOPCILJHJHB()  [RVA 0x31E7E34]
// MNLIBPAOCLG$$AOPCILJHJHB @ RVA 0x31E7E34

float MNLIBPAOCLG__AOPCILJHJHB(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).FIGDMPIMECD;
}


// ===== public SpriteRenderer PMFGEJHBPGH()  [RVA 0x31E7E3C]
// MNLIBPAOCLG$$PMFGEJHBPGH @ RVA 0x31E7E3C

UnityEngine_SpriteRenderer_o * MNLIBPAOCLG__PMFGEJHBPGH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).JNBHKOBOIMD;
}


// ===== public void CPCOIOEJINK(float CJNHFNHJHPE)  [RVA 0x31E7E44]
// MNLIBPAOCLG$$CPCOIOEJINK @ RVA 0x31E7E44

void MNLIBPAOCLG__CPCOIOEJINK(MNLIBPAOCLG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EIKNANMFNBJ = CJNHFNHJHPE;
  return;
}


// ===== public float AIFBMGIKJDH()  [RVA 0x31E7E4C]
// MNLIBPAOCLG$$AIFBMGIKJDH @ RVA 0x31E7E4C

float MNLIBPAOCLG__AIFBMGIKJDH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  NHBBOEHHEKG_o *pNVar1;
  
  pNVar1 = (__this->fields).CNHHLPPHNCO;
  if (pNVar1 != (NHBBOEHHEKG_o *)0x0) {
    return (pNVar1->fields).NMFKJBOAOLK * (__this->fields).FIGDMPIMECD;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IIMJPBCGBKN(bool CJNHFNHJHPE)  [RVA 0x31E7E70]
// MNLIBPAOCLG$$IIMJPBCGBKN @ RVA 0x31E7E70

void MNLIBPAOCLG__IIMJPBCGBKN(MNLIBPAOCLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar1;
  KHEDNGODOIC_o *pKVar2;
  
  pKVar2 = (__this->fields).ANDGPHHMNMC;
  if ((pKVar2 != (KHEDNGODOIC_o *)0x0) &&
     (__this_00 = (pKVar2->fields).LDAKOINICNJ, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).NGMNLILMJAP;
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_Renderer__set_enabled
                ((UnityEngine_Renderer_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).JFILNBPGNKO;
      if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BECCCPIHKNL()  [RVA 0x31E7ED4]
// MNLIBPAOCLG$$BECCCPIHKNL @ RVA 0x31E7ED4

void MNLIBPAOCLG__BECCCPIHKNL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d73 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_11212/*"Render::RemoveHotGround: check whether is needed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d73 = 1;
    method = extraout_x1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,method);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_11212/*"Render::RemoveHotGround: check whether is needed"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  return;
}


// ===== public void FHCGFCHAPIH()  [RVA 0x31E7F54]
// MNLIBPAOCLG$$FHCGFCHAPIH @ RVA 0x31E7F54

void MNLIBPAOCLG__FHCGFCHAPIH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  MEHKKHFBNLM_o *pMVar1;
  GMGALNFPLPA_o **ppGVar2;
  
  ppGVar2 = &(__this->fields).EILFIPKJKKI;
  if (*ppGVar2 != (GMGALNFPLPA_o *)0x0) {
    pMVar1 = (__this->fields).DDDKDGIEBFP;
    if (pMVar1 == (MEHKKHFBNLM_o *)0x0) goto LAB_032e7fcc;
    MEHKKHFBNLM__FNALLLLMHPO(pMVar1,*ppGVar2,(MethodInfo *)0x0);
    *ppGVar2 = (GMGALNFPLPA_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
  }
  ppGVar2 = &(__this->fields).ACOIDPEGKIP;
  if (*ppGVar2 == (GMGALNFPLPA_o *)0x0) {
    return;
  }
  pMVar1 = (__this->fields).DDDKDGIEBFP;
  if (pMVar1 != (MEHKKHFBNLM_o *)0x0) {
    MEHKKHFBNLM__FNALLLLMHPO(pMVar1,*ppGVar2,(MethodInfo *)0x0);
    *ppGVar2 = (GMGALNFPLPA_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
    return;
  }
LAB_032e7fcc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BALEGGJGENM(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x31E7FD0]
// MNLIBPAOCLG$$BALEGGJGENM @ RVA 0x31E7FD0

void MNLIBPAOCLG__BALEGGJGENM(MNLIBPAOCLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  KHEDNGODOIC_o *__this_00;
  
  __this_00 = (__this->fields).ANDGPHHMNMC;
  if (__this_00 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__BALEGGJGENM(__this_00,BCKBBGCOMJD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x31E7FEC]
// MNLIBPAOCLG$$NDNPGAKJLHM @ RVA 0x31E7FEC

void MNLIBPAOCLG__NDNPGAKJLHM(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *__this_00;
  
  __this_00 = (__this->fields).ANDGPHHMNMC;
  if (__this_00 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKFCHIGNFHM(SpriteRenderer EDGOPONEKCB, float KEFILECBPMF, float BHOOMCEABGH)  [RVA 0x31E77B4]
// MNLIBPAOCLG$$HKFCHIGNFHM @ RVA 0x31E77B4

void MNLIBPAOCLG__HKFCHIGNFHM
               (MNLIBPAOCLG_o *__this,UnityEngine_SpriteRenderer_o *EDGOPONEKCB,float KEFILECBPMF,
               float BHOOMCEABGH,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o value_00;
  
  if ((DAT_04566d74 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04566d74 = 1;
  }
  iVar1 = (__this->fields).DOGMHNFPALG;
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566e50 == '\0') {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04566e50 = '\x01';
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL < iVar1) {
    (__this->fields).DOGMHNFPALG = 0;
  }
  if (EDGOPONEKCB != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar3 = UnityEngine_SpriteRenderer__get_color(EDGOPONEKCB,(MethodInfo *)0x0);
    value_00.fields.b = UVar3.fields.b;
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566e50 == '\0') {
      FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
      DAT_04566e50 = '\x01';
    }
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar2 = sinf((3.1415927 / (float)DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL) *
                 (float)(__this->fields).DOGMHNFPALG);
    value_00.fields.a = fVar2 * 0.5 + 0.5;
    value_00.fields.r = (float)(int)UVar3.fields._0_8_;
    value_00.fields.g = (float)(int)((ulong)UVar3.fields._0_8_ >> 0x20);
    UnityEngine_SpriteRenderer__set_color(EDGOPONEKCB,value_00,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)EDGOPONEKCB,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      value.fields.y = BHOOMCEABGH;
      value.fields.x = KEFILECBPMF;
      value.fields.z = -40.0;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      (__this->fields).DOGMHNFPALG = (__this->fields).DOGMHNFPALG + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ADOHICCAIMN(float CJNHFNHJHPE)  [RVA 0x31E8008]
// MNLIBPAOCLG$$ADOHICCAIMN @ RVA 0x31E8008

void MNLIBPAOCLG__ADOHICCAIMN(MNLIBPAOCLG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BIBDPIEOEHF = CJNHFNHJHPE;
  return;
}


// ===== public int FBFNFBPFHEI(GBJGJEGPHKD BCKBBGCOMJD, Color EFJKPCADGJH, bool PMIAIAOKFND = True)  [RVA 0x31E8010]
// MNLIBPAOCLG$$FBFNFBPFHEI @ RVA 0x31E8010

int32_t MNLIBPAOCLG__FBFNFBPFHEI
                  (MNLIBPAOCLG_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,UnityEngine_Color_o EFJKPCADGJH,
                  bool PMIAIAOKFND,MethodInfo *method)

{
  int32_t iVar1;
  PKNBJJPHAKI_o *__this_00;
  KHEDNGODOIC_o *pKVar2;
  
  pKVar2 = (__this->fields).ANDGPHHMNMC;
  if ((pKVar2 != (KHEDNGODOIC_o *)0x0) &&
     (__this_00 = (pKVar2->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    iVar1 = PKNBJJPHAKI__OCJCMHLABBF
                      (__this_00,BCKBBGCOMJD,EFJKPCADGJH,PMIAIAOKFND,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FLAPNIPHHGJ(string POOAFIMEKMF, float NGKHKGNBMBE)  [RVA 0x31E8038]
// MNLIBPAOCLG$$FLAPNIPHHGJ @ RVA 0x31E8038

void MNLIBPAOCLG__FLAPNIPHHGJ
               (MNLIBPAOCLG_o *__this,System_String_o *POOAFIMEKMF,float NGKHKGNBMBE,
               MethodInfo *method)

{
  System_String_o *extraout_x1;
  
  if ((DAT_04566d75 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    NGKHKGNBMBE = (float)FUN_01bab630(&StringLiteral_11211/*"Render::AddHotGround: check whether is needed"*/);
    DAT_04566d75 = 1;
    POOAFIMEKMF = extraout_x1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGKHKGNBMBE,OCLJMFBDKOA_TypeInfo,POOAFIMEKMF);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_11211/*"Render::AddHotGround: check whether is needed"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  return;
}


// ===== public void OOLIMJGIIOL()  [RVA 0x31E80B8]
// MNLIBPAOCLG$$OOLIMJGIIOL @ RVA 0x31E80B8

void MNLIBPAOCLG__OOLIMJGIIOL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o **ppUVar2;
  UnityEngine_SpriteRenderer_o *x;
  
  if ((DAT_04566d76 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d76 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).JNBHKOBOIMD;
  x = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032e8108 to 033e81eb has its CatchHandler @ 032e8108
                       catch() { ... } // from try @ 032e8108 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8378 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8418 with catch @ 032e8108
                       catch() { ... } // from try @ 032e8420 with catch @ 032e8108
                       catch() { ... } // from try @ 032e84dc with catch @ 032e8108 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppUVar2 = (UnityEngine_SpriteRenderer_o *)0x0;
      thunk_FUN_01c20e04(ppUVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void GHCGOFHFBGO(float BCEJOJECHDA)  [RVA 0x31E8158]
// MNLIBPAOCLG$$GHCGOFHFBGO @ RVA 0x31E8158

void MNLIBPAOCLG__GHCGOFHFBGO(MNLIBPAOCLG_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  UnityEngine_Color_o value;
  
  if ((DAT_04566d77 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d77 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).JNBHKOBOIMD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).JNBHKOBOIMD;
    if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
      value.fields.a = BCEJOJECHDA / 255.0;
      value.fields.b = 1.0;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_SpriteRenderer__set_color(pUVar2,value,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).JNBHKOBOIMD;
      if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e81ec to 033e8213 has its CatchHandler @ 032e8448 */
        CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(CMMIJCJOBBF,0.0 < BCEJOJECHDA,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x31E8224]
// MNLIBPAOCLG$$IJGHEOJPJLH @ RVA 0x31E8224

UnityEngine_GameObject_o * MNLIBPAOCLG__IJGHEOJPJLH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== private void ACHNLCNJLHJ()  [RVA 0x31E822C]
// MNLIBPAOCLG$$ACHNLCNJLHJ @ RVA 0x31E822C

void MNLIBPAOCLG__ACHNLCNJLHJ(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  KHEDNGODOIC_o *__this_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  MEHKKHFBNLM_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NHBBOEHHEKG_o *pNVar8;
  KHEDNGODOIC_o **ppKVar9;
  MEHKKHFBNLM_o **ppMVar10;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 032e8248 to 033e8273 has its CatchHandler @ 032e8444 */
  if ((DAT_04566d78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    FUN_01bab630(&KHEDNGODOIC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
                    /* try { // try from 032e82a4 to 033e82a7 has its CatchHandler @ 032e8434 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    DAT_04566d78 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (KHEDNGODOIC_o *)thunk_FUN_01bda818(KHEDNGODOIC_TypeInfo,method);
  KHEDNGODOIC___ctor(__this_00,(MethodInfo *)0x0);
  ppKVar9 = &(__this->fields).ANDGPHHMNMC;
  *ppKVar9 = __this_00;
  thunk_FUN_01c20e04(ppKVar9,__this_00);
                    /* try { // try from 032e82f0 to 033e8313 has its CatchHandler @ 032e842c */
  if (*ppKVar9 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__GIENGNEGHPJ(*ppKVar9,(__this->fields).CNHHLPPHNCO,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar8 != (NHBBOEHHEKG_o *)0x0) &&
       (pSVar3 = (pNVar8->fields).JDLKPFCELNF,
       pSVar3 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
                    /* try { // try from 032e8354 to 033e8377 has its CatchHandler @ 032e8430 */
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__
                          );
        if (!bVar2) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_60.fields._current[2].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 032e8378 to 033e8403 has its CatchHandler @ 032e8108 */
        pUVar4 = UnityEngine_GameObject__get_transform
                           (local_60.fields._current[2].monitor,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).LDAKOINICNJ;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__)
      ;
      pNVar8 = (__this->fields).CNHHLPPHNCO;
      if (((pNVar8 != (NHBBOEHHEKG_o *)0x0) &&
          (pSVar3 = (pNVar8->fields).JDLKPFCELNF,
          pSVar3 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) &&
         (pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,
                              (pSVar3->fields)._size + -1,
                              Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__),
         pIVar7 != (Il2CppObject *)0x0)) {
        iVar1 = *(int *)&pIVar7[4].monitor;
        __this_01 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
        MEHKKHFBNLM___ctor(__this_01,iVar1 + -3,(MethodInfo *)0x0);
        ppMVar10 = &(__this->fields).DDDKDGIEBFP;
        *ppMVar10 = __this_01;
                    /* try { // try from 032e8404 to 033e8407 has its CatchHandler @ 032e8440 */
                    /* try { // try from 032e8408 to 033e840f has its CatchHandler @ 032e843c */
        thunk_FUN_01c20e04(ppMVar10,__this_01);
                    /* try { // try from 032e8410 to 033e8417 has its CatchHandler @ 032e8438 */
                    /* try { // try from 032e8418 to 033e841b has its CatchHandler @ 032e8108 */
                    /* try { // try from 032e841c to 033e841f has its CatchHandler @ 032e8428 */
        if ((*ppMVar10 != (MEHKKHFBNLM_o *)0x0) &&
           (pUVar5 = ((*ppMVar10)->fields)._KDDKJJLDFFO_k__BackingField,
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032e8420 to 033e8457 has its CatchHandler @ 032e8108 */
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e841c with catch @ 032e8428
                        */
          pUVar5 = (__this->fields).LDAKOINICNJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e82f0 with catch @ 032e842c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8354 with catch @ 032e8430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e82a4 with catch @ 032e8434
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8410 with catch @ 032e8438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8408 with catch @ 032e843c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8404 with catch @ 032e8440
                        */
          if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8248 with catch @ 032e8444
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e81ec with catch @ 032e8448
                        */
            UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 032e8458 to 033e845b has its CatchHandler @ 032e846c */
            MNLIBPAOCLG__AKDOBEJDFFH(__this,method_00);
                    /* catch() { ... } // from try @ 032e8458 with catch @ 032e846c */
                    /* try { // try from 032e8474 to 033e84db has its CatchHandler @ 032e84f0 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAMNFFKFNBA()  [RVA 0x31E85FC]
// MNLIBPAOCLG$$AAMNFFKFNBA @ RVA 0x31E85FC

void MNLIBPAOCLG__AAMNFFKFNBA(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *__this_00;
  
  __this_00 = (__this->fields).ANDGPHHMNMC;
  if (__this_00 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__AAMNFFKFNBA(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public float GMDBLBCFNFM()  [RVA 0x31E8610]
// MNLIBPAOCLG$$GMDBLBCFNFM @ RVA 0x31E8610

float MNLIBPAOCLG__GMDBLBCFNFM(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).EIKNANMFNBJ;
}


// ===== public void .ctor(GameObject JJHEGPBBMLG)  [RVA 0x31E8618]
// MNLIBPAOCLG$$.ctor @ RVA 0x31E8618

void MNLIBPAOCLG___ctor(MNLIBPAOCLG_o *__this,UnityEngine_GameObject_o *JJHEGPBBMLG,
                       MethodInfo *method)

{
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  System_Collections_Generic_List_KBECBDOOHCO__o **ppSVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  NHBBOEHHEKG_o **ppNVar2;
  UnityEngine_GameObject_o **ppUVar3;
  
  if ((DAT_04566d79 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KBECBDOOHCO>_TypeInfo);
    FUN_01bab630(&StringLiteral_11208/*"Render"*/);
    DAT_04566d79 = 1;
  }
  __this_00 = (System_Collections_Generic_List_KBECBDOOHCO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KBECBDOOHCO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KBECBDOOHCO>__ctor__);
  ppSVar1 = &(__this->fields).GHLEJFDLGHM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_11208/*"Render"*/,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields).LDAKOINICNJ;
  *ppUVar3 = __this_01;
  thunk_FUN_01c20e04(ppUVar3,__this_01);
  if (((*ppUVar3 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_02 = UnityEngine_GameObject__get_transform(*ppUVar3,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
    ppNVar2 = &(__this->fields).CNHHLPPHNCO;
    *ppNVar2 = (NHBBOEHHEKG_o *)0x0;
    thunk_FUN_01c20e04(ppNVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HFCJLBGBGPI()  [RVA 0x31E8750]
// MNLIBPAOCLG$$HFCJLBGBGPI @ RVA 0x31E8750

void MNLIBPAOCLG__HFCJLBGBGPI(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *__this_00;
  
  __this_00 = (__this->fields).ANDGPHHMNMC;
  if (__this_00 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__HFCJLBGBGPI(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MENMLPHAGKO(CNDPAJOLKFN EKEMKOCPHPO, CNDPAJOLKFN MJNAHMEKOLE, float LFJGFLNMBMC, bool OHHHOODPACJ, string BEOLPHEOACM, float NKLEIAMJEMN, float BPDGIJADMJC)  [RVA 0x31E876C]
// MNLIBPAOCLG$$MENMLPHAGKO @ RVA 0x31E876C

void MNLIBPAOCLG__MENMLPHAGKO
               (MNLIBPAOCLG_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *MJNAHMEKOLE,
               float LFJGFLNMBMC,bool OHHHOODPACJ,System_String_o *BEOLPHEOACM,float NKLEIAMJEMN,
               float BPDGIJADMJC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  PKHLGDMJPMF_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  CocosAnimation_o **ppCVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566d7a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CocosAnimation>__,EKEMKOCPHPO,
                 MJNAHMEKOLE,OHHHOODPACJ);
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566d7a = 1;
  }
  __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
  PKHLGDMJPMF___ctor(__this_00,1.0,0.0,(MethodInfo *)0x0);
  fVar7 = PKHLGDMJPMF__EBHMOCBHAFJ((PKHLGDMJPMF_o *)MJNAHMEKOLE,__this_00,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BAKAPMIJMEN;
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pCVar4 = (CocosAnimation_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar3,Method_UnityEngine_GameObject_GetComponent<CocosAnimation>__);
    ppCVar6 = &(__this->fields).JFHJBGJOPME;
    *ppCVar6 = pCVar4;
                    /* try { // try from 032e882c to 033e88fb has its CatchHandler @ 032e882c
                       catch() { ... } // from try @ 032e882c with catch @ 032e882c
                       catch() { ... } // from try @ 032e8954 with catch @ 032e882c
                       catch() { ... } // from try @ 032e89b8 with catch @ 032e882c
                       catch() { ... } // from try @ 032e89e8 with catch @ 032e882c
                       catch() { ... } // from try @ 032e8a20 with catch @ 032e882c */
    thunk_FUN_01c20e04(ppCVar6,pCVar4);
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    if (*ppCVar6 != (CocosAnimation_o *)0x0) {
      bVar2 = CocosAnimation__Init(*ppCVar6,BEOLPHEOACM,1,(System_String_o *)0x0,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Transform_o *)(ulong)bVar2;
      pCVar4 = *ppCVar6;
      if (pCVar4 != (CocosAnimation_o *)0x0) {
        (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar4->fields)._PPEGDOHGLJJ_k__BackingField = LFJGFLNMBMC;
        (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
        pUVar3 = (__this->fields).BAKAPMIJMEN;
        pUVar5 = (UnityEngine_Transform_o *)0x0;
        if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
            EKEMKOCPHPO != (CNDPAJOLKFN_o *)0x0)) && (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 0.0;
          value.fields.x = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
          value.fields.y = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
          UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).BAKAPMIJMEN;
          pUVar5 = (UnityEngine_Transform_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalScale(pUVar5,NKLEIAMJEMN,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).BAKAPMIJMEN;
            pUVar5 = (UnityEngine_Transform_o *)0x0;
            if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_01 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar5 = (UnityEngine_Transform_o *)0x0, __this_01 != (UnityEngine_Transform_o *)0x0)
               ) {
              fVar8 = 0.0;
              if ((uint)ABS(fVar7 + BPDGIJADMJC) < 0x7f800001) {
                fVar8 = -(fVar7 + BPDGIJADMJC);
              }
              auVar1._4_8_ = 0;
              auVar1._0_4_ = fVar8;
              UnityEngine_Transform__set_eulerAngles
                        (__this_01,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
              pUVar3 = (__this->fields).BAKAPMIJMEN;
              pUVar5 = (UnityEngine_Transform_o *)0x0;
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032e88fc to 033e8903 has its CatchHandler @ 032e89cc */
                UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pUVar5);
}


// ===== public KHEDNGODOIC HDPHJDAOIDC()  [RVA 0x31E891C]
// MNLIBPAOCLG$$HDPHJDAOIDC @ RVA 0x31E891C

KHEDNGODOIC_o * MNLIBPAOCLG__HDPHJDAOIDC(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).ANDGPHHMNMC;
}


// ===== public void OLGJDFBPGGO(CNDPAJOLKFN EKEMKOCPHPO, CNDPAJOLKFN MJNAHMEKOLE, int DFIBGGDJPLM)  [RVA 0x31E8924]
// MNLIBPAOCLG$$OLGJDFBPGGO @ RVA 0x31E8924

void MNLIBPAOCLG__OLGJDFBPGGO
               (MNLIBPAOCLG_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *MJNAHMEKOLE,
               int32_t DFIBGGDJPLM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *EIJDDKJONFO;
  KBECBDOOHCO_o *__this_00;
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NHBBOEHHEKG_o *pNVar3;
  KHEDNGODOIC_o *pKVar4;
  PKNBJJPHAKI_o *pPVar5;
  KBECBDOOHCO_array *pKVar6;
  
                    /* try { // try from 032e8928 to 033e8937 has its CatchHandler @ 032e89bc */
                    /* try { // try from 032e8944 to 033e8953 has its CatchHandler @ 032e89c0 */
                    /* try { // try from 032e8954 to 033e89af has its CatchHandler @ 032e882c */
  method_00 = (MethodInfo *)EKEMKOCPHPO;
  if ((DAT_04566d7b & 1) == 0) {
    FUN_01bab630(&KBECBDOOHCO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_Add__);
    FUN_01bab630(&StringLiteral_12940/*"Textures/misc/drop_blood"*/);
    DAT_04566d7b = 1;
    method_00 = extraout_x1;
  }
  MNLIBPAOCLG__MIHIILOKCEN(__this,method_00);
  if (0 < DFIBGGDJPLM) {
    do {
                    /* try { // try from 032e89b4 to 033e89b7 has its CatchHandler @ 032e89c4 */
      EIJDDKJONFO = StringLiteral_12940/*"Textures/misc/drop_blood"*/;
                    /* try { // try from 032e89b8 to 033e89e3 has its CatchHandler @ 032e882c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8928 with catch @ 032e89bc
                        */
      __this_00 = (KBECBDOOHCO_o *)thunk_FUN_01bda818(KBECBDOOHCO_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e8944 with catch @ 032e89c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e89b4 with catch @ 032e89c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e89b0 with catch @ 032e89c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e88fc with catch @ 032e89cc
                        */
      KBECBDOOHCO___ctor(__this_00,MJNAHMEKOLE,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).CNHHLPPHNCO;
      if ((pNVar3 == (NHBBOEHHEKG_o *)0x0) || (__this_00 == (KBECBDOOHCO_o *)0x0)) {
LAB_032e8ac0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032e89e4 to 033e89e7 has its CatchHandler @ 032e8a10 */
                    /* try { // try from 032e89e8 to 033e8a17 has its CatchHandler @ 032e882c */
      KBECBDOOHCO__MNHLFKMFAIG
                (__this_00,EIJDDKJONFO,(UnityEngine_Color_o)(pNVar3->fields).GLECOLINCIH.fields,
                 (MethodInfo *)0x0);
      KBECBDOOHCO__GFECOLFOILC(__this_00,EKEMKOCPHPO,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032e89e4 with catch @ 032e8a10 */
      KBECBDOOHCO__MHEKOCOGKEE(__this_00,0.3,(MethodInfo *)0x0);
      pKVar4 = (__this->fields).ANDGPHHMNMC;
                    /* try { // try from 032e8a18 to 033e8a1f has its CatchHandler @ 032e8a34 */
                    /* try { // try from 032e8a20 to 033e8a2b has its CatchHandler @ 032e882c */
      if ((pKVar4 == (KHEDNGODOIC_o *)0x0) ||
         (pPVar5 = (pKVar4->fields).BAFJNPPPBMK, pPVar5 == (PKNBJJPHAKI_o *)0x0)) goto LAB_032e8ac0;
                    /* try { // try from 032e8a2c to 033e8a33 has its CatchHandler @ 032e8a34 */
      KBECBDOOHCO__PDDDDDPBEMI(__this_00,(pPVar5->fields).LDAKOINICNJ,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KBECBDOOHCO>_Add__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e8a18 with catch @ 032e8a34
                       catch(type#2 @ 00000000) { ... } // from try @ 032e8a2c with catch @ 032e8a34
                        */
      __this_01 = (__this->fields).GHLEJFDLGHM;
                    /* try { // try from 032e8a38 to 033e8c03 has its CatchHandler @ 032e8a38
                       catch() { ... } // from try @ 032e8a38 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8c90 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8da0 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8df8 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8e40 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8e80 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8ea0 with catch @ 032e8a38
                       catch() { ... } // from try @ 032e8ed4 with catch @ 032e8a38 */
      if (__this_01 == (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) goto LAB_032e8ac0;
      pKVar6 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pKVar6 == (KBECBDOOHCO_array *)0x0) goto LAB_032e8ac0;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pKVar6->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pKVar6->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pKVar6->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      DFIBGGDJPLM = DFIBGGDJPLM + -1;
    } while (DFIBGGDJPLM != 0);
  }
  (__this->fields).MNJAAGGNAKE = 0;
  return;
}


// ===== public void AKDOBEJDFFH()  [RVA 0x31E8504]
// MNLIBPAOCLG$$AKDOBEJDFFH @ RVA 0x31E8504

void MNLIBPAOCLG__AKDOBEJDFFH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  MEHKKHFBNLM_o *pMVar3;
  NHBBOEHHEKG_o *pNVar4;
  int iVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  pMVar3 = (__this->fields).DDDKDGIEBFP;
  if ((pMVar3 != (MEHKKHFBNLM_o *)0x0) &&
     (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) &&
       ((((pMVar3 = (pNVar4->fields).CLFNHGGJHCA, pMVar3 != (MEHKKHFBNLM_o *)0x0 &&
          (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
          pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
         (__this_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) &&
        (UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_localScale(pUVar2,UVar6,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).CNHHLPPHNCO;
      if ((((pNVar4 != (NHBBOEHHEKG_o *)0x0) &&
           (pMVar3 = (pNVar4->fields).CLFNHGGJHCA, pMVar3 != (MEHKKHFBNLM_o *)0x0)) &&
          (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
          pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
         (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
        pMVar3 = (__this->fields).DDDKDGIEBFP;
        if ((pMVar3 != (MEHKKHFBNLM_o *)0x0) &&
           (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          iVar5 = (pMVar3->fields).MFDBACKNCKL;
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            value.fields.z = (float)iVar5;
            value.fields.x = (float)(int)UVar6.fields._0_8_;
            value.fields.y = (float)(int)((ulong)UVar6.fields._0_8_ >> 0x20);
            UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
            pMVar3 = (__this->fields).DDDKDGIEBFP;
            if (pMVar3 != (MEHKKHFBNLM_o *)0x0) {
              MEHKKHFBNLM__BDHAMOEKNNK(pMVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AJFICHLKOBO(float OAGELANKMBH, float IOJNHKIPJOK)  [RVA 0x31E8B88]
// MNLIBPAOCLG$$AJFICHLKOBO @ RVA 0x31E8B88

void MNLIBPAOCLG__AJFICHLKOBO
               (MNLIBPAOCLG_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = IOJNHKIPJOK;
    value.fields.x = OAGELANKMBH;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GDKDCGFCBIH()  [RVA 0x31E8BCC]
// MNLIBPAOCLG$$GDKDCGFCBIH @ RVA 0x31E8BCC

void MNLIBPAOCLG__GDKDCGFCBIH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  CocosAnimation_o **ppCVar2;
  CocosAnimation_o *y;
  
  if ((DAT_04566d7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d7c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032e8c04 to 033e8c0b has its CatchHandler @ 032e8e24 */
  ppCVar2 = &(__this->fields).JFHJBGJOPME;
  y = *ppCVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032e8c24 to 033e8c2b has its CatchHandler @ 032e8e20 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*ppCVar2 != (CocosAnimation_o *)0x0) {
    if (((*ppCVar2)->fields)._JJCDMHFHJAB_k__BackingField != false) {
      return;
    }
    __this_00 = (__this->fields).BAKAPMIJMEN;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      *ppCVar2 = (CocosAnimation_o *)0x0;
                    /* try { // try from 032e8c6c to 033e8c8f has its CatchHandler @ 032e8dfc */
      thunk_FUN_01c20e04(ppCVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ICOOOADKLOP()  [RVA 0x31E8C84]
// MNLIBPAOCLG$$ICOOOADKLOP @ RVA 0x31E8C84

void MNLIBPAOCLG__ICOOOADKLOP(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  NHBBOEHHEKG_o *pNVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* try { // try from 032e8c90 to 033e8ce3 has its CatchHandler @ 032e8a38 */
  if ((DAT_04566d7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    DAT_04566d7d = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields).CNHHLPPHNCO;
                    /* try { // try from 032e8ce4 to 033e8ceb has its CatchHandler @ 032e8e8c */
  if ((pNVar3 != (NHBBOEHHEKG_o *)0x0) &&
     (__this_00 = (pNVar3->fields).JDLKPFCELNF, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) {
                    /* try { // try from 032e8d08 to 033e8d0f has its CatchHandler @ 032e8e0c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
        MNLIBPAOCLG__AKDOBEJDFFH(__this,method_00);
        return;
      }
      if ((MEHKKHFBNLM_o *)local_38.fields._current == (MEHKKHFBNLM_o *)0x0) break;
                    /* try { // try from 032e8d30 to 033e8d37 has its CatchHandler @ 032e8e88 */
      MEHKKHFBNLM__BDHAMOEKNNK((MEHKKHFBNLM_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public void LFDAFIMNBOP(bool CJNHFNHJHPE)  [RVA 0x31E8DE0]
// MNLIBPAOCLG$$LFDAFIMNBOP @ RVA 0x31E8DE0

void MNLIBPAOCLG__LFDAFIMNBOP(MNLIBPAOCLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 032e8de0 to 033e8de3 has its CatchHandler @ 032e8e14 */
                    /* try { // try from 032e8de4 to 033e8de7 has its CatchHandler @ 032e8e10 */
  (__this->fields).JBHKLPKKJNA = CJNHFNHJHPE;
                    /* try { // try from 032e8de8 to 033e8deb has its CatchHandler @ 032e8e08 */
  return;
}


// ===== public float PEPCFEDOOPJ()  [RVA 0x31E8DEC]
// MNLIBPAOCLG$$PEPCFEDOOPJ @ RVA 0x31E8DEC

float MNLIBPAOCLG__PEPCFEDOOPJ(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
                    /* try { // try from 032e8dec to 033e8df3 has its CatchHandler @ 032e8e84 */
  return (__this->fields).CPMMFFBNDHP;
}


// ===== public bool LONEPFMMICL()  [RVA 0x31E8DF4]
// MNLIBPAOCLG$$LONEPFMMICL @ RVA 0x31E8DF4

bool MNLIBPAOCLG__LONEPFMMICL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
                    /* try { // try from 032e8df4 to 033e8df7 has its CatchHandler @ 032e8e00 */
                    /* try { // try from 032e8df8 to 033e8e3b has its CatchHandler @ 032e8a38 */
  return (__this->fields).JBHKLPKKJNA;
}


// ===== public void JGOJAPFCIHI()  [RVA 0x31E8DFC]
// MNLIBPAOCLG$$JGOJAPFCIHI @ RVA 0x31E8DFC

void MNLIBPAOCLG__JGOJAPFCIHI(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  KBECBDOOHCO_o *__this_01;
  MethodInfo *method_00;
  int iVar1;
  
                    /* catch() { ... } // from try @ 032e8c6c with catch @ 032e8dfc */
                    /* catch() { ... } // from try @ 032e8df4 with catch @ 032e8e00 */
                    /* catch() { ... } // from try @ 032e8d7c with catch @ 032e8e04 */
                    /* catch() { ... } // from try @ 032e8de8 with catch @ 032e8e08 */
                    /* catch() { ... } // from try @ 032e8d08 with catch @ 032e8e0c */
                    /* catch() { ... } // from try @ 032e8de4 with catch @ 032e8e10 */
  if ((DAT_04566d7e & 1) == 0) {
                    /* catch() { ... } // from try @ 032e8de0 with catch @ 032e8e14 */
                    /* catch() { ... } // from try @ 032e8ddc with catch @ 032e8e18 */
                    /* catch() { ... } // from try @ 032e8dd8 with catch @ 032e8e1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Count__);
                    /* catch() { ... } // from try @ 032e8c24 with catch @ 032e8e20 */
                    /* catch() { ... } // from try @ 032e8c04 with catch @ 032e8e24 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
    DAT_04566d7e = 1;
  }
  __this_00 = (__this->fields).GHLEJFDLGHM;
  if (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) {
                    /* try { // try from 032e8e3c to 033e8e3f has its CatchHandler @ 032e8e64 */
                    /* try { // try from 032e8e40 to 033e8e6b has its CatchHandler @ 032e8a38 */
    if (0 < (__this_00->fields)._size) {
      iVar1 = 0;
      do {
        __this_01 = (KBECBDOOHCO_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar1,
                               Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
        if (__this_01 == (KBECBDOOHCO_o *)0x0) goto LAB_032e8eb0;
                    /* catch() { ... } // from try @ 032e8e3c with catch @ 032e8e64 */
        KBECBDOOHCO__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 032e8e6c to 033e8e7f has its CatchHandler @ 032e8ee8 */
        __this_00 = (__this->fields).GHLEJFDLGHM;
        if (__this_00 == (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) goto LAB_032e8eb0;
        iVar1 = iVar1 + 1;
                    /* catch() { ... } // from try @ 032e8dd4 with catch @ 032e8e80
                       try { // try from 032e8e80 to 033e8e9b has its CatchHandler @ 032e8a38 */
      } while (iVar1 < (__this_00->fields)._size);
                    /* catch() { ... } // from try @ 032e8dec with catch @ 032e8e84 */
      iVar1 = (__this->fields).MNJAAGGNAKE;
                    /* catch() { ... } // from try @ 032e8d30 with catch @ 032e8e88 */
                    /* catch() { ... } // from try @ 032e8ce4 with catch @ 032e8e8c */
      if (0x5a < iVar1) {
        MNLIBPAOCLG__MIHIILOKCEN(__this,method_00);
        iVar1 = (__this->fields).MNJAAGGNAKE;
      }
                    /* try { // try from 032e8e9c to 033e8e9f has its CatchHandler @ 032e8ec4 */
                    /* try { // try from 032e8ea0 to 033e8ecb has its CatchHandler @ 032e8a38 */
      (__this->fields).MNJAAGGNAKE = iVar1 + 1;
    }
    return;
  }
LAB_032e8eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DFLHLNGDGEP(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x31E8EB4]
// MNLIBPAOCLG$$DFLHLNGDGEP @ RVA 0x31E8EB4

void MNLIBPAOCLG__DFLHLNGDGEP(MNLIBPAOCLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  KHEDNGODOIC_o *__this_00;
  
  __this_00 = (__this->fields).ANDGPHHMNMC;
  if (__this_00 != (KHEDNGODOIC_o *)0x0) {
                    /* catch() { ... } // from try @ 032e8e9c with catch @ 032e8ec4 */
    KHEDNGODOIC__DFLHLNGDGEP(__this_00,BCKBBGCOMJD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032e8ecc to 033e8ed3 has its CatchHandler @ 032e8ee8 */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ(NHBBOEHHEKG LBKOHHHPNIP)  [RVA 0x31E8ED0]
// MNLIBPAOCLG$$GIENGNEGHPJ @ RVA 0x31E8ED0

void MNLIBPAOCLG__GIENGNEGHPJ(MNLIBPAOCLG_o *__this,NHBBOEHHEKG_o *LBKOHHHPNIP,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  FCJBEKHDLAF_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  NHBBOEHHEKG_o *pNVar4;
  UnityEngine_Object_o *__this_03;
  NHBBOEHHEKG_o **ppNVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o value_00;
  
                    /* try { // try from 032e8ed4 to 033e8edf has its CatchHandler @ 032e8a38 */
                    /* try { // try from 032e8ee0 to 033e8ee7 has its CatchHandler @ 032e8ee8 */
                    /* catch() { ... } // from try @ 032e8e6c with catch @ 032e8ee8
                       catch() { ... } // from try @ 032e8ecc with catch @ 032e8ee8
                       catch() { ... } // from try @ 032e8ee0 with catch @ 032e8ee8 */
  if ((DAT_04566d7f & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_11209/*"Render ("*/);
    DAT_04566d7f = 1;
  }
  if (LBKOHHHPNIP != (NHBBOEHHEKG_o *)0x0) {
    __this_03 = (UnityEngine_Object_o *)(__this->fields).LDAKOINICNJ;
    value = System_String__Concat
                      (StringLiteral_11209/*"Render ("*/,(LBKOHHHPNIP->fields).KGLJICLJHEL,StringLiteral_1100/*")"*/,
                       (MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_03,value,(MethodInfo *)0x0);
      ppNVar5 = &(__this->fields).CNHHLPPHNCO;
      *ppNVar5 = LBKOHHHPNIP;
      thunk_FUN_01c20e04(ppNVar5,LBKOHHHPNIP);
      (__this->fields).FIGDMPIMECD = 1.0;
      iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (*ppNVar5 != (NHBBOEHHEKG_o *)0x0) {
        (__this->fields).LIPPNBNMMIH = (float)iVar1 / ((*ppNVar5)->fields).DAPHCPICAAC;
        iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(WideScreenController_TypeInfo);
        }
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
                    /* try { // try from 032e8fec to 033e919b has its CatchHandler @ 032e8fec
                       catch() { ... } // from try @ 032e8fec with catch @ 032e8fec
                       catch() { ... } // from try @ 032e928c with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9390 with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9398 with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9448 with catch @ 032e8fec */
        if ((float)iVar2 / (float)iVar3 <= 1.7777778) {
          method_00 = extraout_x1;
          fVar6 = (float)iVar1;
        }
        else {
          iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          method_00 = extraout_x1_00;
          if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(WideScreenController_TypeInfo);
            method_00 = extraout_x1_01;
          }
          fVar6 = (float)iVar2 * 1.7777778;
          if ((float)iVar1 / (float)iVar2 <= 1.7777778) {
            fVar6 = (float)iVar1;
          }
        }
        pNVar4 = (__this->fields).CNHHLPPHNCO;
        fVar6 = fVar6 / (__this->fields).LIPPNBNMMIH;
        (__this->fields).CPMMFFBNDHP = fVar6;
        if (pNVar4 != (NHBBOEHHEKG_o *)0x0) {
          (__this->fields).AOKLLOKEKIK = fVar6 / (pNVar4->fields).NMFKJBOAOLK;
          (__this->fields).GGOLFKNHHFD =
               ((pNVar4->fields).DAPHCPICAAC * 0.5 - (pNVar4->fields).IDBMGJFGIJH) * 0.5;
          MNLIBPAOCLG__ACHNLCNJLHJ(__this,method_00);
          MNLIBPAOCLG__CPIADMPFDEL(__this,method_01);
          MNLIBPAOCLG__DKGKOFLFJJB(__this,method_02);
          __this_00 = (__this->fields).LDAKOINICNJ;
          if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
             __this_01 != (UnityEngine_Transform_o *)0x0)) {
            value_00.fields.z = 1.0;
            value_00.fields.x = 1.0;
            value_00.fields.y = -1.0;
            UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7f == '\0') {
              FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
              DAT_04565b7f = '\x01';
            }
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
            if (__this_02 != (FCJBEKHDLAF_o *)0x0) {
              iVar1 = FCJBEKHDLAF__IHMLDBDLJON(__this_02,(MethodInfo *)0x0);
              fVar6 = 0.5;
              if (iVar1 != 0x11) {
                fVar6 = 1.0;
              }
              fVar7 = 0.5;
              if (iVar1 != 0x11) {
                fVar7 = 0.0;
              }
              (__this->fields).EIKNANMFNBJ = fVar6;
              (__this->fields).BIBDPIEOEHF = fVar7;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float KILJEOHFABI()  [RVA 0x31E9694]
// MNLIBPAOCLG$$KILJEOHFABI @ RVA 0x31E9694

float MNLIBPAOCLG__KILJEOHFABI(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).BIBDPIEOEHF;
}


// ===== private void CPIADMPFDEL()  [RVA 0x31E91B4]
// MNLIBPAOCLG$$CPIADMPFDEL @ RVA 0x31E91B4

void MNLIBPAOCLG__CPIADMPFDEL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  UnityEngine_Sprite_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *extraout_x1;
  MNLIBPAOCLG_Fields *pMVar6;
  UnityEngine_SpriteRenderer_o **ppUVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04566d80 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
                    /* try { // try from 032e91f8 to 033e9223 has its CatchHandler @ 032e93ac */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_12935/*"Textures/fight/pointers/arrow"*/);
    FUN_01bab630(&StringLiteral_3101/*"Arrow"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 032e9230 to 033e927f has its CatchHandler @ 032e93b4 */
    DAT_04566d80 = 1;
    method = extraout_x1;
  }
  (__this->fields).DOGMHNFPALG = 0;
  pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(pUVar1,StringLiteral_3101/*"Arrow"*/,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (pUVar1,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    pMVar6 = &__this->fields;
    pMVar6->NGMNLILMJAP = pUVar2;
    thunk_FUN_01c20e04(pMVar6,pUVar2);
                    /* try { // try from 032e9280 to 033e928b has its CatchHandler @ 032e93a4 */
    if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e928c to 033e9387 has its CatchHandler @ 032e8fec */
      UnityEngine_SpriteRenderer__set_flipY(pMVar6->NGMNLILMJAP,true,(MethodInfo *)0x0);
      pUVar2 = pMVar6->NGMNLILMJAP;
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar3 = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1/*""*/,StringLiteral_12935/*"Textures/fight/pointers/arrow"*/,false,(MethodInfo *)0x0)
      ;
      if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite(pUVar2,pUVar3,(MethodInfo *)0x0);
        if ((pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pMVar6->NGMNLILMJAP,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 1.0;
          value.fields.x = 0.5;
          value.fields.y = -0.5;
          UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
          if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pMVar6->NGMNLILMJAP,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).LDAKOINICNJ;
            if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar4,pUVar5,false,(MethodInfo *)0x0);
              pUVar1 = (UnityEngine_GameObject_o *)
                       thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
              UnityEngine_GameObject___ctor(pUVar1,StringLiteral_3101/*"Arrow"*/,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = (UnityEngine_SpriteRenderer_o *)
                         UnityEngine_GameObject__AddComponent<object>
                                   (pUVar1,
                                    Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
                ppUVar7 = &(__this->fields).JFILNBPGNKO;
                *ppUVar7 = pUVar2;
                    /* try { // try from 032e9388 to 033e938f has its CatchHandler @ 032e93a8 */
                thunk_FUN_01c20e04(ppUVar7,pUVar2);
                    /* try { // try from 032e9390 to 033e9393 has its CatchHandler @ 032e8fec */
                if (*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e9394 to 033e9397 has its CatchHandler @ 032e93a0 */
                    /* try { // try from 032e9398 to 033e93c3 has its CatchHandler @ 032e8fec */
                  UnityEngine_SpriteRenderer__set_flipY(*ppUVar7,true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9394 with catch @ 032e93a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9280 with catch @ 032e93a4
                        */
                  if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9388 with catch @ 032e93a8
                        */
                    pUVar2 = *ppUVar7;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e91f8 with catch @ 032e93ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e919c with catch @ 032e93b0
                        */
                    pUVar3 = UnityEngine_SpriteRenderer__get_sprite
                                       (pMVar6->NGMNLILMJAP,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9230 with catch @ 032e93b4
                        */
                    if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e93c4 to 033e93c7 has its CatchHandler @ 032e93d8 */
                      UnityEngine_SpriteRenderer__set_sprite(pUVar2,pUVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032e93c4 with catch @ 032e93d8 */
                      if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0)
                         , pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                        value_00.fields.z = 1.0;
                        value_00.fields.x = 0.5;
                        value_00.fields.y = -0.5;
                    /* try { // try from 032e93e0 to 033e9447 has its CatchHandler @ 032e945c */
                        UnityEngine_Transform__set_localScale(pUVar4,value_00,(MethodInfo *)0x0);
                        if (*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
                          pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0)
                          ;
                          pUVar1 = (__this->fields).LDAKOINICNJ;
                          if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                             (pUVar5 = UnityEngine_GameObject__get_transform
                                                 (pUVar1,(MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__SetParent(pUVar4,pUVar5,false,(MethodInfo *)0x0);
                            if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                               (pUVar1 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)*ppUVar7,
                                                    (MethodInfo *)0x0),
                               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032e9448 to 033e9453 has its CatchHandler @ 032e8fec */
                    /* try { // try from 032e9454 to 033e945b has its CatchHandler @ 032e945c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e93e0 with catch @ 032e945c
                       catch(type#2 @ 00000000) { ... } // from try @ 032e9454 with catch @ 032e945c
                        */
                              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
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


// ===== public float EPJCHCHDJCE()  [RVA 0x31E7688]
// MNLIBPAOCLG$$EPJCHCHDJCE @ RVA 0x31E7688

float MNLIBPAOCLG__EPJCHCHDJCE(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *pKVar1;
  PKNBJJPHAKI_o *__this_00;
  float fVar2;
  float fVar3;
  
  pKVar1 = (__this->fields).ANDGPHHMNMC;
  if ((pKVar1 != (KHEDNGODOIC_o *)0x0) &&
     (__this_00 = (pKVar1->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    fVar3 = (__this->fields).CPMMFFBNDHP;
    fVar2 = PKNBJJPHAKI__HJBLPDBMFKK(__this_00,(MethodInfo *)0x0);
    fVar2 = (float)NEON_fminnm(fVar3 / (fVar2 + 300.0),0x3f800000);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Transform LLCCOBOLJML()  [RVA 0x31E969C]
// MNLIBPAOCLG$$LLCCOBOLJML @ RVA 0x31E969C

UnityEngine_Transform_o * MNLIBPAOCLG__LLCCOBOLJML(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  MEHKKHFBNLM_o *pMVar2;
  
  pMVar2 = (__this->fields).DDDKDGIEBFP;
  if ((pMVar2 != (MEHKKHFBNLM_o *)0x0) &&
     (__this_00 = (pMVar2->fields)._KDDKJJLDFFO_k__BackingField,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float IIFIHKHDNCM()  [RVA 0x31E96C0]
// MNLIBPAOCLG$$IIFIHKHDNCM @ RVA 0x31E96C0

float MNLIBPAOCLG__IIFIHKHDNCM(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return 1.0;
}


// ===== public PKNBJJPHAKI KLOHNEKNDBL()  [RVA 0x31E96C8]
// MNLIBPAOCLG$$KLOHNEKNDBL @ RVA 0x31E96C8

PKNBJJPHAKI_o * MNLIBPAOCLG__KLOHNEKNDBL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *pKVar1;
  
  pKVar1 = (__this->fields).ANDGPHHMNMC;
  if (pKVar1 != (KHEDNGODOIC_o *)0x0) {
    return (pKVar1->fields).BAFJNPPPBMK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float CDFEOHCDMNO()  [RVA 0x31E96E4]
// MNLIBPAOCLG$$CDFEOHCDMNO @ RVA 0x31E96E4

float MNLIBPAOCLG__CDFEOHCDMNO(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  return (__this->fields).PFPLKPNJDHD;
}


// ===== public float AGFGNAOHOJF(float CGNJKLAIPBB, float GBLKICMLIHH, float MCFPOCKJGBM)  [RVA 0x31E76D8]
// MNLIBPAOCLG$$AGFGNAOHOJF @ RVA 0x31E76D8

float MNLIBPAOCLG__AGFGNAOHOJF
                (MNLIBPAOCLG_o *__this,float CGNJKLAIPBB,float GBLKICMLIHH,float MCFPOCKJGBM,
                MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MGNPHCAAEIO_CEMCIPLHMKD_o *pMVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_04566d81 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566d81 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04566ab3 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566ab3 = '\x01';
    method = extraout_x1_01;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
  if (pMVar1 != (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) {
    fVar3 = (pMVar1->fields).LMJDLCKDFLD;
    fVar2 = 0.0;
    if (CGNJKLAIPBB < ABS(GBLKICMLIHH) + fVar3) {
      fVar3 = (ABS(GBLKICMLIHH) - CGNJKLAIPBB) + fVar3;
      fVar2 = -fVar3;
      if (GBLKICMLIHH <= 0.0) {
        fVar2 = fVar3;
      }
      fVar2 = fVar2 * MCFPOCKJGBM;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JOJNIMMFKDN(float KAHCMCDBOJJ, float LFKKILIJCFI, float DDOJAIELDCP, string POOAFIMEKMF)  [RVA 0x31E96EC]
// MNLIBPAOCLG$$JOJNIMMFKDN @ RVA 0x31E96EC

void MNLIBPAOCLG__JOJNIMMFKDN
               (MNLIBPAOCLG_o *__this,float KAHCMCDBOJJ,float LFKKILIJCFI,float DDOJAIELDCP,
               System_String_o *POOAFIMEKMF,MethodInfo *method)

{
  GMGALNFPLPA_o *pGVar1;
  MEHKKHFBNLM_o *pMVar2;
  NHBBOEHHEKG_o *pNVar3;
  GMGALNFPLPA_o **ppGVar4;
  float fVar5;
  undefined4 in_register_00005044;
  
  if ((DAT_04566d82 & 1) == 0) {
    FUN_01bab630(&GMGALNFPLPA_TypeInfo);
    FUN_01bab630(&StringLiteral_12938/*"Textures/fight/rules/ringout/"*/);
    DAT_04566d82 = 1;
  }
  ppGVar4 = &(__this->fields).EILFIPKJKKI;
  if (*ppGVar4 == (GMGALNFPLPA_o *)0x0) {
    pGVar1 = (GMGALNFPLPA_o *)thunk_FUN_01bda818(GMGALNFPLPA_TypeInfo);
    GMGALNFPLPA___ctor(pGVar1,1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar3 == (NHBBOEHHEKG_o *)0x0) || (pGVar1 == (GMGALNFPLPA_o *)0x0)) goto LAB_032e9940;
    fVar5 = (pNVar3->fields).IDBMGJFGIJH;
    (*(pGVar1->klass->vtable)._4_KLGJMPDHMKE.methodPtr)
              (CONCAT44(in_register_00005044,DDOJAIELDCP),
               (pNVar3->fields).NMFKJBOAOLK * 0.5 + KAHCMCDBOJJ,fVar5 + fVar5 + 7.0,0,pGVar1,
               POOAFIMEKMF,StringLiteral_12938/*"Textures/fight/rules/ringout/"*/,0,0xffffffff,
               (pGVar1->klass->vtable)._4_KLGJMPDHMKE.method);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (pNVar3 == (NHBBOEHHEKG_o *)0x0) goto LAB_032e9940;
    GMGALNFPLPA__GFECOLFOILC
              (pGVar1,KAHCMCDBOJJ * 0.5 + (pNVar3->fields).NMFKJBOAOLK * -0.25,
               ((pNVar3->fields).IDBMGJFGIJH + 7.0) - (pNVar3->fields).DAPHCPICAAC * 0.5,
               (MethodInfo *)0x0);
    pMVar2 = (__this->fields).DDDKDGIEBFP;
    if (pMVar2 == (MEHKKHFBNLM_o *)0x0) goto LAB_032e9940;
    MEHKKHFBNLM__OADFBMDLMOD(pMVar2,pGVar1,(MethodInfo *)0x0);
    *ppGVar4 = pGVar1;
    thunk_FUN_01c20e04(ppGVar4,pGVar1);
  }
  ppGVar4 = &(__this->fields).ACOIDPEGKIP;
  if (*ppGVar4 != (GMGALNFPLPA_o *)0x0) {
    return;
  }
  pGVar1 = (GMGALNFPLPA_o *)thunk_FUN_01bda818(GMGALNFPLPA_TypeInfo);
  GMGALNFPLPA___ctor(pGVar1,1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).CNHHLPPHNCO;
  if ((pNVar3 != (NHBBOEHHEKG_o *)0x0) && (pGVar1 != (GMGALNFPLPA_o *)0x0)) {
    fVar5 = (pNVar3->fields).IDBMGJFGIJH;
    (*(pGVar1->klass->vtable)._4_KLGJMPDHMKE.methodPtr)
              (CONCAT44(in_register_00005044,DDOJAIELDCP),
               (pNVar3->fields).NMFKJBOAOLK * 0.5 - LFKKILIJCFI,fVar5 + fVar5 + 7.0,0,pGVar1,
               POOAFIMEKMF,StringLiteral_12938/*"Textures/fight/rules/ringout/"*/,0,0xffffffff,
               (pGVar1->klass->vtable)._4_KLGJMPDHMKE.method);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (pNVar3 != (NHBBOEHHEKG_o *)0x0) {
      GMGALNFPLPA__GFECOLFOILC
                (pGVar1,LFKKILIJCFI * 0.5 + (pNVar3->fields).NMFKJBOAOLK * 0.25,
                 ((pNVar3->fields).IDBMGJFGIJH + 7.0) - (pNVar3->fields).DAPHCPICAAC * 0.5,
                 (MethodInfo *)0x0);
      pMVar2 = (__this->fields).DDDKDGIEBFP;
      if (pMVar2 != (MEHKKHFBNLM_o *)0x0) {
        MEHKKHFBNLM__OADFBMDLMOD(pMVar2,pGVar1,(MethodInfo *)0x0);
        *ppGVar4 = pGVar1;
        thunk_FUN_01c20e04(ppGVar4,pGVar1);
        return;
      }
    }
  }
LAB_032e9940:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIHIILOKCEN()  [RVA 0x31E8AC4]
// MNLIBPAOCLG$$MIHIILOKCEN @ RVA 0x31E8AC4

void MNLIBPAOCLG__MIHIILOKCEN(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  int length;
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  KBECBDOOHCO_o *__this_01;
  int index;
  
  if ((DAT_04566d83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
    DAT_04566d83 = 1;
  }
  __this_00 = (__this->fields).GHLEJFDLGHM;
  if (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) {
    index = 0;
    do {
      length = (__this_00->fields)._size;
      if (length <= index) {
        (__this_00->fields)._size = 0;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,
                              (MethodInfo *)0x0);
          return;
        }
        return;
      }
      __this_01 = (KBECBDOOHCO_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
      if (__this_01 == (KBECBDOOHCO_o *)0x0) break;
      KBECBDOOHCO__OOFBMDPOOCB(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields).GHLEJFDLGHM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DKGKOFLFJJB()  [RVA 0x31E9468]
// MNLIBPAOCLG$$DKGKOFLFJJB @ RVA 0x31E9468

void MNLIBPAOCLG__DKGKOFLFJJB(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  KHEDNGODOIC_o *pKVar4;
  MEHKKHFBNLM_o *pMVar5;
  UnityEngine_GameObject_o **ppUVar6;
  UnityEngine_GameObject_o **ppUVar7;
  UnityEngine_Vector3_o UVar8;
  
  if ((DAT_04566d84 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_4662/*"ConteynerHit"*/);
    FUN_01bab630(&StringLiteral_7123/*"HitLayer"*/);
    DAT_04566d84 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(pUVar1,StringLiteral_4662/*"ConteynerHit"*/,(MethodInfo *)0x0);
  ppUVar6 = &(__this->fields).BAKAPMIJMEN;
  *ppUVar6 = pUVar1;
  thunk_FUN_01c20e04(ppUVar6,pUVar1);
  if (*ppUVar6 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>
              (*ppUVar6,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    if ((*ppUVar6 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar6,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar8.fields.z = 1.0;
      UVar8.fields.x = 0.7;
      UVar8.fields.y = 1.0;
      UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(pUVar1,StringLiteral_7123/*"HitLayer"*/,(MethodInfo *)0x0);
      ppUVar7 = &(__this->fields).EHBIBHGMKGD;
      *ppUVar7 = pUVar1;
      thunk_FUN_01c20e04(ppUVar7,pUVar1);
      if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
        pKVar4 = (__this->fields).ANDGPHHMNMC;
        if ((((pKVar4 != (KHEDNGODOIC_o *)0x0) &&
             (pUVar1 = (pKVar4->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
            (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
            pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
           (UVar8 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition(pUVar2,UVar8,(MethodInfo *)0x0);
          if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
            pKVar4 = (__this->fields).ANDGPHHMNMC;
            if (((pKVar4 != (KHEDNGODOIC_o *)0x0) &&
                (pUVar1 = (pKVar4->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0))
               && ((pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_Transform_o *)0x0 &&
                   (UVar8 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
              UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
              if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
                pMVar5 = (__this->fields).DDDKDGIEBFP;
                if (((pMVar5 != (MEHKKHFBNLM_o *)0x0) &&
                    (pUVar1 = (pMVar5->fields)._KDDKJJLDFFO_k__BackingField,
                    pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
                   (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
                  if (*ppUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar6,(MethodInfo *)0x0);
                    if ((*ppUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
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

