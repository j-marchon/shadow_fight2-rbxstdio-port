// MMDDDDFHOLG$$GJMDFCNLBGE @ RVA 0x336253C

void MMDDDDFHOLG__GJMDFCNLBGE
               (MMDDDDFHOLG_o *__this,EHCCNKFIPPA_o *BCKBBGCOMJD,HEFOANCOHDC_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  PHDCILJMEHO_o *__this_00;
  PHDCILJMEHO_array *pPVar3;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_01;
  
  if ((DAT_04567a8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_Add__);
    FUN_01bab630(&PHDCILJMEHO_TypeInfo);
    DAT_04567a8f = 1;
  }
  if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
    if (BCKBBGCOMJD != (EHCCNKFIPPA_o *)0x0) {
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._OGNGBMMEPLD_k__BackingField,4,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._JBCIAMDCGND_k__BackingField,2,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._HKKHBGHDDPN_k__BackingField,5,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._LBFBPAPODCK_k__BackingField,6,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._BNEPLANGLCO_k__BackingField,7,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._KHNBIJGEEKD_k__BackingField,8,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._FEKPIGKJNFC_k__BackingField,1,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._JFANEHLBMLN_k__BackingField,3,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._LMNDANMPFEC_k__BackingField,9,(MethodInfo *)0x0)
      ;
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._KILHFKPHAFK_k__BackingField,0xc,
                 (MethodInfo *)0x0);
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._BPDOGAAAHIP_k__BackingField,0xd,
                 (MethodInfo *)0x0);
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._GBDEKDLFBLF_k__BackingField,10,(MethodInfo *)0x0
                );
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._PFGFOOJGIHM_k__BackingField,0xb,
                 (MethodInfo *)0x0);
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._GAIIAJFJGHE_k__BackingField,0xe,
                 (MethodInfo *)0x0);
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._DKPCPHLJAAA_k__BackingField,0xf,
                 (MethodInfo *)0x0);
      HEFOANCOHDC__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._ODODLDOGFEP_k__BackingField,0x10,
                 (MethodInfo *)0x0);
      __this_01 = (BCKBBGCOMJD->fields)._BPHPMGBCNOO_k__BackingField;
      __this_00 = (PHDCILJMEHO_o *)thunk_FUN_01bda818(PHDCILJMEHO_TypeInfo);
      PHDCILJMEHO___ctor(__this_00,EIKFGOCCOIE,true,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<PHDCILJMEHO>_Add__;
      if (__this_01 != (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
        pPVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pPVar3 != (PHDCILJMEHO_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pPVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pPVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pPVar3->m_Items + (int)uVar1,__this_00);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

