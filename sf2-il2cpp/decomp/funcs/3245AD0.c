// CHDGOFBHAFI$$BNPLDAHKIED @ RVA 0x3245AD0

void CHDGOFBHAFI__BNPLDAHKIED
               (CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,PGICCMFLDPI_o *PDDJCLHDJMG,
               MethodInfo *method)

{
  bool bVar1;
  PGICCMFLDPI_o **ppPVar2;
  AADKBCFCLKK_o *IIPPMAOIKHB_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  CHDGOFBHAFI_o *__this_01;
  NODLJPNGNBG_o *pNVar3;
  AKOMJPINHEN_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  AADKBCFCLKK_o **ppAVar4;
  int index;
  
  if ((DAT_045670c5 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<NODLJPNGNBG>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_045670c5 = 1;
  }
  ppPVar2 = &(__this->fields).PAMNNAGEJGG;
  *ppPVar2 = PDDJCLHDJMG;
  thunk_FUN_01c20e04(ppPVar2,PDDJCLHDJMG);
  ppAVar4 = &(__this->fields).AABMLCNHHPN;
  if (*ppAVar4 != (AADKBCFCLKK_o *)0x0) {
    if (IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) goto LAB_03345bd8;
    if (((*ppAVar4)->fields).AMKHEHFFAKJ == (IIPPMAOIKHB->fields).AMKHEHFFAKJ) {
      IIPPMAOIKHB_00 = AADKBCFCLKK__Clone(IIPPMAOIKHB,(MethodInfo *)0x0);
      if ((IIPPMAOIKHB_00 != (AADKBCFCLKK_o *)0x0) && (*ppAVar4 != (AADKBCFCLKK_o *)0x0)) {
        AJKNKCLEEAD__KIAOELALKBL<object>
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)
                   (IIPPMAOIKHB_00->fields).MPAIPMANDEO,
                   (System_Collections_Generic_IList_T__o *)((*ppAVar4)->fields).MPAIPMANDEO,
                   Method_AJKNKCLEEAD_KIAOELALKBL<NODLJPNGNBG>__);
        __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
        if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
          index = 0;
          do {
            if ((__this_00->fields).count <= index) {
              *ppAVar4 = IIPPMAOIKHB_00;
              goto LAB_03345bf8;
            }
            __this_01 = (CHDGOFBHAFI_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index
                                   ,
                                   Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                                  );
            CHDGOFBHAFI__PKKGAFHHDMN(__this_01,IIPPMAOIKHB_00,(NODLJPNGNBG_o *)__this_01,method);
            __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
            index = index + 1;
          } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
        }
      }
      goto LAB_03345bd8;
    }
  }
  *ppAVar4 = IIPPMAOIKHB;
  IIPPMAOIKHB_00 = IIPPMAOIKHB;
LAB_03345bf8:
  thunk_FUN_01c20e04(ppAVar4,IIPPMAOIKHB_00);
  if ((*ppAVar4 != (AADKBCFCLKK_o *)0x0) &&
     (pNVar3 = CHDGOFBHAFI__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          ((*ppAVar4)->fields).MPAIPMANDEO,method_00),
     pNVar3 != (NODLJPNGNBG_o *)0x0)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (__this_02 != (AKOMJPINHEN_o *)0x0) {
      method_02 = (MethodInfo *)0x0;
      AKOMJPINHEN__MCAIDEFDJHF(__this_02,IIPPMAOIKHB,(MethodInfo *)0x0);
      CHDGOFBHAFI__BNMEANHFGEB(__this,method_01);
      if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
        if (((IIPPMAOIKHB->fields).IOLELGMBJFL == false) &&
           (bVar1 = OOBBAGLCFPF__EJBFAOJGGNB(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
          CHDGOFBHAFI__KGPBODNEJMO(__this,IIPPMAOIKHB,method_02);
          return;
        }
        return;
      }
    }
  }
LAB_03345bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

