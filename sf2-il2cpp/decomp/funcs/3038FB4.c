// LJNJDFEAIOH$$ADLBPEEGLGL @ RVA 0x3038FB4

void LJNJDFEAIOH__ADLBPEEGLGL(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  CHDGOFBHAFI_o *__this_00;
  long lVar3;
  undefined8 *puVar4;
  CPNHNIKFGFB_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  MethodInfo *method_00;
  int32_t CEOLOKFCKIG;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_04565d64 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04565d64 = 1;
  }
  (__this->fields).NAJFBIBIHDM = false;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__IEMLFDPOMMD(__this_00,(MethodInfo *)0x0);
        lVar3 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(ODEIOKOJGDM_c **)(piVar6 + -2) == ODEIOKOJGDM_TypeInfo) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03139114;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,ODEIOKOJGDM_TypeInfo,0);
LAB_03139114:
          method_00 = (MethodInfo *)puVar4[1];
          (*(code *)*puVar4)(plVar7,0);
          LJNJDFEAIOH__ELDPIJPEGIL(__this,IDCGLBOIAFJ,method_00);
          return;
        }
      }
    }
    else {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (CPNHNIKFGFB_o *)0x0) {
        CEOLOKFCKIG = 0x29c8;
        if (iVar1 != 1) {
          CEOLOKFCKIG = 0x2714;
        }
        CPNHNIKFGFB__DIGPCFKCCBK(__this_01,CEOLOKFCKIG,(MethodInfo *)0x0);
        __this_02 = (__this->fields).PDEAGAFHDFI;
        if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
                    (__this_02,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

