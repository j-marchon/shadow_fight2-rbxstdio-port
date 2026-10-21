// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$Init @ RVA 0x34B681C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,bool DAOGBIACCMM,
               JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *OJDBABKBAFA,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  PLIIGOCLJDL_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  int64_t BIIMFIDNPJP;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  Il2CppMethodPointer pIVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  
  if ((DAT_04568590 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_10870);
    FUN_01bab630(&StringLiteral_17763);
    FUN_01bab630(&StringLiteral_11815);
    DAT_04568590 = 1;
  }
  local_38 = 0;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,2,StringLiteral_17763,
             true,1,StringLiteral_9679,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._congratulations;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_11815,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._congratulations;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 035b6930 to 036b6937 has its CatchHandler @ 035b6b18 */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                ((pBVar6->ODGAJIBDACC).fields.r,(pBVar6->ODGAJIBDACC).fields.g,
                 (pBVar6->ODGAJIBDACC).fields.b,(pBVar6->ODGAJIBDACC).fields.a,pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      if (OJDBABKBAFA == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
        if (!DAOGBIACCMM) {
          return;
        }
        pNVar3 = (__this->fields)._medal;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,StringLiteral_10870,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._place;
                    /* try { // try from 035b6a20 to 036b6a47 has its CatchHandler @ 035b6af8 */
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = LIIFLGALGNK__HLMBDJOGONJ(1,5,(MethodInfo *)0x0);
          local_38 = CONCAT44(local_38._4_4_,iVar1);
          pSVar4 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
                    /* try { // try from 035b6a48 to 036b6adb has its CatchHandler @ 035b6780 */
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
            pNVar2 = (__this->fields)._place;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              fVar8 = 0.0;
              fVar9 = 0.0;
              fVar10 = 0.0;
              pIVar7 = (pNVar2->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar2->klass->vtable)._23_set_color.method;
              fVar11 = 1.0;
LAB_035b6a88:
              (*pIVar7)(fVar8,fVar9,fVar10,fVar11,pNVar2,pMVar5);
              return;
            }
          }
        }
      }
      else {
        pNVar3 = (__this->fields)._medal;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 035b6944 to 036b694f has its CatchHandler @ 035b6b14 */
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(OJDBABKBAFA->fields).HHCNBANOKPB,(MethodInfo *)0x0);
                    /* try { // try from 035b6958 to 036b6963 has its CatchHandler @ 035b6b08 */
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if ((__this_01 != (EEGDOGKBLNG_o *)0x0) &&
             (BIIMFIDNPJP = EEGDOGKBLNG__APCMGOCHMGC(__this_01,(MethodInfo *)0x0),
             __this_00 != (PLIIGOCLJDL_o *)0x0)) {
            iVar1 = PLIIGOCLJDL__BHOKMPEGAEG(__this_00,BIIMFIDNPJP,(MethodInfo *)0x0);
            local_38 = CONCAT44(iVar1,(undefined4)local_38);
            pNVar2 = (__this->fields)._place;
                    /* try { // try from 035b69ac to 036b69cf has its CatchHandler @ 035b6b04 */
            pSVar4 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                        (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
              pNVar2 = (__this->fields)._place;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 035b69d4 to 036b69df has its CatchHandler @ 035b6afc */
                fVar10 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.b;
                fVar11 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.a;
                fVar8 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.r;
                fVar9 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.g;
                pIVar7 = (pNVar2->klass->vtable)._23_set_color.methodPtr;
                pMVar5 = (pNVar2->klass->vtable)._23_set_color.method;
                goto LAB_035b6a88;
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

