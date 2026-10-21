// Nekki.SF2.GUI.TableView$$ReloadData @ RVA 0x30D94A8

void Nekki_SF2_GUI_TableView__ReloadData(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint DFIBGGDJPLM;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KMAKOOHEKNB_o *pKVar4;
  CPFMNHBNOEN_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  uint JDEFJPHCNMM;
  CPFMNHBNOEN_o *pCVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_04566346 & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_04566346 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method);
  ppNVar2 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
  *ppNVar2 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  DFIBGGDJPLM = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_00);
  pKVar4 = (__this->fields).HCLHHHKCABP;
  if (pKVar4 != (KMAKOOHEKNB_o *)0x0) {
    KMAKOOHEKNB__CECCCGNLKFN(pKVar4,DFIBGGDJPLM,(MethodInfo *)0x0);
    (__this->fields).BPELPEAHGHL = DFIBGGDJPLM == 0;
    if (DFIBGGDJPLM == 0) {
      return;
    }
    if (0 < (int)DFIBGGDJPLM) {
      JDEFJPHCNMM = 0;
      do {
        pCVar8 = (__this->fields).NFKFGFPBGDA;
        if (pCVar8 == (CPFMNHBNOEN_o *)0x0) goto LAB_031d9630;
        pCVar5 = pCVar8->klass;
        uVar1._0_1_ = (pCVar5->_2).rank;
        uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
              pVVar3 = pCVar5->vtable + (*piVar7 + 1);
              goto LAB_031d9598;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar8,CPFMNHBNOEN_TypeInfo,1);
LAB_031d9598:
        fVar9 = (float)(*pVVar3->methodPtr)(pCVar8,__this,(ulong)JDEFJPHCNMM,pVVar3->method);
        pKVar4 = (__this->fields).HCLHHHKCABP;
        if (pKVar4 == (KMAKOOHEKNB_o *)0x0) goto LAB_031d9630;
        KMAKOOHEKNB__FIPNKCMHCLE(pKVar4,fVar9,JDEFJPHCNMM,(MethodInfo *)0x0);
        JDEFJPHCNMM = JDEFJPHCNMM + 1;
      } while (JDEFJPHCNMM != DFIBGGDJPLM);
    }
    pKVar4 = (__this->fields).HCLHHHKCABP;
    if (pKVar4 != (KMAKOOHEKNB_o *)0x0) {
      __this_00 = (__this->fields).IDIMFLMKDMD;
      fVar10 = (__this->fields).MENMAPNCLAH;
      fVar9 = KMAKOOHEKNB__GOFGJILDJLA(pKVar4,DFIBGGDJPLM - 1,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
        Nekki_SF2_GUI_TableViewScroll__set_SizeDelta
                  (__this_00,fVar10 + fVar9 + (__this->fields).EKHGDOCDNLC,(MethodInfo *)0x0);
        Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method_01);
        Nekki_SF2_GUI_TableView__BGOLOHLDFGK(__this,method_02);
        (__this->fields).EIOEGKDNAJK = false;
        return;
      }
    }
  }
LAB_031d9630:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

