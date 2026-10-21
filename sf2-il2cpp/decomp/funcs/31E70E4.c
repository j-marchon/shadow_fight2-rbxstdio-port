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

