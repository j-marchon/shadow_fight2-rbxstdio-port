// Nekki.SF2.GUI.Map.MapScene$$FLAPJEGKBIO @ RVA 0x3587E44

void Nekki_SF2_GUI_Map_MapScene__FLAPJEGKBIO
               (Nekki_SF2_GUI_Map_MapScene_o *__this,KHODJHFHCDE_o *EKHNABFCAMM,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *pFVar2;
  KKLJIDJBFEI_o *pKVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568d0c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568d0c = 1;
  }
  if (EKHNABFCAMM != (KHODJHFHCDE_o *)0x0) {
    if ((EKHNABFCAMM->fields)._NJFBLJHECFH_k__BackingField == false) {
      return;
    }
    pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
      if ((pFVar2->fields)._MEAPCEHFFHD_k__BackingField == false) {
        pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar2 == (FKDLCJJOGIP_o *)0x0) goto LAB_03687fa8;
        method = (MethodInfo *)0x0;
        FKDLCJJOGIP__GIENGNEGHPJ(pFVar2,0,(MethodInfo *)0x0);
      }
      pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
        method_02 = extraout_x1;
        if ((pFVar2->fields)._NFAAGONINOL_k__BackingField != false) {
          pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pFVar2 == (FKDLCJJOGIP_o *)0x0) goto LAB_03687fa8;
          bVar1 = FKDLCJJOGIP__PMINMFLPJCB(pFVar2,(MethodInfo *)0x0);
          method_02 = extraout_x1_00;
          if (bVar1) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = Nekki_SF2_GUI_Map_MapScene__PAEKCOEHGMB(__this,method_00);
              if (bVar1) {
                return;
              }
              Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
              Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
              return;
            }
            Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
            Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
            pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
            if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
              KKLJIDJBFEI__FHIODBIPGBG(pKVar3,(MethodInfo *)0x0);
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              MGNPHCAAEIO__OIPLCHEIFNJ((MethodInfo *)0x0);
              return;
            }
            goto LAB_03687fa8;
          }
        }
        Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_02);
        Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__FHIODBIPGBG(pKVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03687fa8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

