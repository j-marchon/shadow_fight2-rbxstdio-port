// PONNKDFAMFM$$.ctor @ RVA 0x34A39A8

void PONNKDFAMFM___ctor(PONNKDFAMFM_o *__this,PONNKDFAMFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined1 uVar3;
  uint8_t uVar4;
  undefined3 uVar5;
  int32_t iVar6;
  undefined6 uVar7;
  undefined2 uVar8;
  int32_t iVar9;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar10;
  PONNKDFAMFM_PMJIICINKEM_o *pPVar11;
  PONNKDFAMFM_PMJIICINKEM_o *pPVar12;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar13;
  PONNKDFAMFM_Fields *pPVar14;
  PONNKDFAMFM_PMJIICINKEM_o **ppPVar15;
  int64_t iVar16;
  int64_t iVar17;
  int64_t iVar18;
  
  if ((DAT_045684bf & 1) == 0) {
    FUN_01bab630(&PONNKDFAMFM_IBOIJJKIIAJ_TypeInfo);
    FUN_01bab630(&PONNKDFAMFM_PMJIICINKEM_TypeInfo);
    DAT_045684bf = 1;
  }
  pPVar10 = (PONNKDFAMFM_IBOIJJKIIAJ_o *)thunk_FUN_01bda818(PONNKDFAMFM_IBOIJJKIIAJ_TypeInfo);
  PONNKDFAMFM_IBOIJJKIIAJ___ctor(pPVar10,(MethodInfo *)0x0);
  pPVar14 = &__this->fields;
  pPVar14->JDHAHDALAOA = pPVar10;
  thunk_FUN_01c20e04(pPVar14,pPVar10);
  pPVar11 = (PONNKDFAMFM_PMJIICINKEM_o *)thunk_FUN_01bda818(PONNKDFAMFM_PMJIICINKEM_TypeInfo);
  PONNKDFAMFM_PMJIICINKEM___ctor(pPVar11,(MethodInfo *)0x0);
  ppPVar15 = &(__this->fields).OGAGBLMFFAL;
  *ppPVar15 = pPVar11;
  thunk_FUN_01c20e04(ppPVar15,pPVar11);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((IBKIPBJJCPG != (PONNKDFAMFM_o *)0x0) &&
     (pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL, pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0)) {
    pPVar12 = *ppPVar15;
    bVar1 = (pPVar11->fields).BGGJBKHNGFG.fields.inited;
    bVar2 = (pPVar11->fields).BGGJBKHNGFG.fields.fakeValueActive;
    uVar3 = (pPVar11->fields).BGGJBKHNGFG.fields.field_0xb;
    uVar4 = (pPVar11->fields).BGGJBKHNGFG.fields.currentCryptoKey;
    uVar5 = *(undefined3 *)&(pPVar11->fields).BGGJBKHNGFG.fields.field_0x1;
    iVar6 = (pPVar11->fields).BGGJBKHNGFG.fields.hiddenValue;
    if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
      (pPVar12->fields).BGGJBKHNGFG.fields.fakeValue =
           (pPVar11->fields).BGGJBKHNGFG.fields.fakeValue;
      (pPVar12->fields).BGGJBKHNGFG.fields.inited = bVar1;
      (pPVar12->fields).BGGJBKHNGFG.fields.fakeValueActive = bVar2;
      (pPVar12->fields).BGGJBKHNGFG.fields.field_0xb = uVar3;
      (pPVar12->fields).BGGJBKHNGFG.fields.currentCryptoKey = uVar4;
      *(undefined3 *)&(pPVar12->fields).BGGJBKHNGFG.fields.field_0x1 = uVar5;
      (pPVar12->fields).BGGJBKHNGFG.fields.hiddenValue = iVar6;
      pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
      if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
        pPVar12 = *ppPVar15;
        bVar1 = (pPVar11->fields).HBMNICBOJFL.fields.inited;
        bVar2 = (pPVar11->fields).HBMNICBOJFL.fields.fakeValueActive;
        uVar3 = (pPVar11->fields).HBMNICBOJFL.fields.field_0xb;
        uVar4 = (pPVar11->fields).HBMNICBOJFL.fields.currentCryptoKey;
        uVar5 = *(undefined3 *)&(pPVar11->fields).HBMNICBOJFL.fields.field_0x1;
        iVar6 = (pPVar11->fields).HBMNICBOJFL.fields.hiddenValue;
        if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
          (pPVar12->fields).HBMNICBOJFL.fields.fakeValue =
               (pPVar11->fields).HBMNICBOJFL.fields.fakeValue;
          (pPVar12->fields).HBMNICBOJFL.fields.inited = bVar1;
          (pPVar12->fields).HBMNICBOJFL.fields.fakeValueActive = bVar2;
          (pPVar12->fields).HBMNICBOJFL.fields.field_0xb = uVar3;
          (pPVar12->fields).HBMNICBOJFL.fields.currentCryptoKey = uVar4;
          *(undefined3 *)&(pPVar12->fields).HBMNICBOJFL.fields.field_0x1 = uVar5;
          (pPVar12->fields).HBMNICBOJFL.fields.hiddenValue = iVar6;
          pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
          if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
            pPVar12 = *ppPVar15;
            bVar1 = (pPVar11->fields).HDGEOJGHEOE.fields.inited;
            bVar2 = (pPVar11->fields).HDGEOJGHEOE.fields.fakeValueActive;
            uVar3 = (pPVar11->fields).HDGEOJGHEOE.fields.field_0xb;
            uVar4 = (pPVar11->fields).HDGEOJGHEOE.fields.currentCryptoKey;
            uVar5 = *(undefined3 *)&(pPVar11->fields).HDGEOJGHEOE.fields.field_0x1;
            iVar6 = (pPVar11->fields).HDGEOJGHEOE.fields.hiddenValue;
            if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
              (pPVar12->fields).HDGEOJGHEOE.fields.fakeValue =
                   (pPVar11->fields).HDGEOJGHEOE.fields.fakeValue;
              (pPVar12->fields).HDGEOJGHEOE.fields.inited = bVar1;
              (pPVar12->fields).HDGEOJGHEOE.fields.fakeValueActive = bVar2;
              (pPVar12->fields).HDGEOJGHEOE.fields.field_0xb = uVar3;
              (pPVar12->fields).HDGEOJGHEOE.fields.currentCryptoKey = uVar4;
              *(undefined3 *)&(pPVar12->fields).HDGEOJGHEOE.fields.field_0x1 = uVar5;
              (pPVar12->fields).HDGEOJGHEOE.fields.hiddenValue = iVar6;
              pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
              if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                pPVar12 = *ppPVar15;
                bVar1 = (pPVar11->fields).NOPGBJNLFHM.fields.inited;
                bVar2 = (pPVar11->fields).NOPGBJNLFHM.fields.fakeValueActive;
                uVar3 = (pPVar11->fields).NOPGBJNLFHM.fields.field_0xb;
                uVar4 = (pPVar11->fields).NOPGBJNLFHM.fields.currentCryptoKey;
                uVar5 = *(undefined3 *)&(pPVar11->fields).NOPGBJNLFHM.fields.field_0x1;
                iVar6 = (pPVar11->fields).NOPGBJNLFHM.fields.hiddenValue;
                if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                  (pPVar12->fields).NOPGBJNLFHM.fields.fakeValue =
                       (pPVar11->fields).NOPGBJNLFHM.fields.fakeValue;
                  (pPVar12->fields).NOPGBJNLFHM.fields.inited = bVar1;
                  (pPVar12->fields).NOPGBJNLFHM.fields.fakeValueActive = bVar2;
                  (pPVar12->fields).NOPGBJNLFHM.fields.field_0xb = uVar3;
                  (pPVar12->fields).NOPGBJNLFHM.fields.currentCryptoKey = uVar4;
                  *(undefined3 *)&(pPVar12->fields).NOPGBJNLFHM.fields.field_0x1 = uVar5;
                  (pPVar12->fields).NOPGBJNLFHM.fields.hiddenValue = iVar6;
                  pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
                  if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                    pPVar12 = *ppPVar15;
                    bVar1 = (pPVar11->fields).BIKFMGALAEC.fields.inited;
                    bVar2 = (pPVar11->fields).BIKFMGALAEC.fields.fakeValueActive;
                    uVar3 = (pPVar11->fields).BIKFMGALAEC.fields.field_0xb;
                    uVar4 = (pPVar11->fields).BIKFMGALAEC.fields.currentCryptoKey;
                    uVar5 = *(undefined3 *)&(pPVar11->fields).BIKFMGALAEC.fields.field_0x1;
                    iVar6 = (pPVar11->fields).BIKFMGALAEC.fields.hiddenValue;
                    if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                      (pPVar12->fields).BIKFMGALAEC.fields.fakeValue =
                           (pPVar11->fields).BIKFMGALAEC.fields.fakeValue;
                      (pPVar12->fields).BIKFMGALAEC.fields.inited = bVar1;
                      (pPVar12->fields).BIKFMGALAEC.fields.fakeValueActive = bVar2;
                      (pPVar12->fields).BIKFMGALAEC.fields.field_0xb = uVar3;
                      (pPVar12->fields).BIKFMGALAEC.fields.currentCryptoKey = uVar4;
                      *(undefined3 *)&(pPVar12->fields).BIKFMGALAEC.fields.field_0x1 = uVar5;
                      (pPVar12->fields).BIKFMGALAEC.fields.hiddenValue = iVar6;
                      pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
                      if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                        pPVar12 = *ppPVar15;
                        bVar1 = (pPVar11->fields).NPADKALJCPB.fields.inited;
                        bVar2 = (pPVar11->fields).NPADKALJCPB.fields.fakeValueActive;
                        uVar3 = (pPVar11->fields).NPADKALJCPB.fields.field_0xb;
                        uVar4 = (pPVar11->fields).NPADKALJCPB.fields.currentCryptoKey;
                        uVar5 = *(undefined3 *)&(pPVar11->fields).NPADKALJCPB.fields.field_0x1;
                        iVar6 = (pPVar11->fields).NPADKALJCPB.fields.hiddenValue;
                        if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                          (pPVar12->fields).NPADKALJCPB.fields.fakeValue =
                               (pPVar11->fields).NPADKALJCPB.fields.fakeValue;
                          (pPVar12->fields).NPADKALJCPB.fields.inited = bVar1;
                          (pPVar12->fields).NPADKALJCPB.fields.fakeValueActive = bVar2;
                          (pPVar12->fields).NPADKALJCPB.fields.field_0xb = uVar3;
                          (pPVar12->fields).NPADKALJCPB.fields.currentCryptoKey = uVar4;
                          *(undefined3 *)&(pPVar12->fields).NPADKALJCPB.fields.field_0x1 = uVar5;
                          (pPVar12->fields).NPADKALJCPB.fields.hiddenValue = iVar6;
                          pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
                          if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                            pPVar12 = *ppPVar15;
                            bVar1 = (pPVar11->fields).AEIJFFBOBCP.fields.inited;
                            bVar2 = (pPVar11->fields).AEIJFFBOBCP.fields.fakeValueActive;
                            uVar3 = (pPVar11->fields).AEIJFFBOBCP.fields.field_0xb;
                            uVar4 = (pPVar11->fields).AEIJFFBOBCP.fields.currentCryptoKey;
                            uVar5 = *(undefined3 *)&(pPVar11->fields).AEIJFFBOBCP.fields.field_0x1;
                            iVar6 = (pPVar11->fields).AEIJFFBOBCP.fields.hiddenValue;
                            if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                              (pPVar12->fields).AEIJFFBOBCP.fields.fakeValue =
                                   (pPVar11->fields).AEIJFFBOBCP.fields.fakeValue;
                              (pPVar12->fields).AEIJFFBOBCP.fields.inited = bVar1;
                              (pPVar12->fields).AEIJFFBOBCP.fields.fakeValueActive = bVar2;
                              (pPVar12->fields).AEIJFFBOBCP.fields.field_0xb = uVar3;
                              (pPVar12->fields).AEIJFFBOBCP.fields.currentCryptoKey = uVar4;
                              *(undefined3 *)&(pPVar12->fields).AEIJFFBOBCP.fields.field_0x1 = uVar5
                              ;
                              (pPVar12->fields).AEIJFFBOBCP.fields.hiddenValue = iVar6;
                              pPVar11 = (IBKIPBJJCPG->fields).OGAGBLMFFAL;
                              if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                                pPVar12 = *ppPVar15;
                                bVar1 = (pPVar11->fields).KKEMMFEJHNP.fields.inited;
                                bVar2 = (pPVar11->fields).KKEMMFEJHNP.fields.fakeValueActive;
                                uVar3 = (pPVar11->fields).KKEMMFEJHNP.fields.field_0xb;
                                uVar4 = (pPVar11->fields).KKEMMFEJHNP.fields.currentCryptoKey;
                                uVar5 = *(undefined3 *)
                                         &(pPVar11->fields).KKEMMFEJHNP.fields.field_0x1;
                                iVar6 = (pPVar11->fields).KKEMMFEJHNP.fields.hiddenValue;
                                if (pPVar12 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                                  (pPVar12->fields).KKEMMFEJHNP.fields.fakeValue =
                                       (pPVar11->fields).KKEMMFEJHNP.fields.fakeValue;
                                  (pPVar12->fields).KKEMMFEJHNP.fields.inited = bVar1;
                                  (pPVar12->fields).KKEMMFEJHNP.fields.fakeValueActive = bVar2;
                                  (pPVar12->fields).KKEMMFEJHNP.fields.field_0xb = uVar3;
                                  (pPVar12->fields).KKEMMFEJHNP.fields.currentCryptoKey = uVar4;
                                  *(undefined3 *)&(pPVar12->fields).KKEMMFEJHNP.fields.field_0x1 =
                                       uVar5;
                                  (pPVar12->fields).KKEMMFEJHNP.fields.hiddenValue = iVar6;
                                  pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                  if ((pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) &&
                                     (pPVar14->JDHAHDALAOA != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)) {
                                    (pPVar14->JDHAHDALAOA->fields).ACHJNNOKEDK =
                                         (pPVar10->fields).ACHJNNOKEDK;
                                    thunk_FUN_01c20e04();
                                    pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                    if (pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                      pPVar13 = pPVar14->JDHAHDALAOA;
                                      bVar1 = (pPVar10->fields).BGGJBKHNGFG.fields.inited;
                                      uVar7 = *(undefined6 *)
                                               &(pPVar10->fields).BGGJBKHNGFG.fields.field_0x1a;
                                      iVar16 = (pPVar10->fields).BGGJBKHNGFG.fields.fakeValue;
                                      iVar18 = (pPVar10->fields).BGGJBKHNGFG.fields.hiddenValue;
                                      iVar17 = (pPVar10->fields).BGGJBKHNGFG.fields.currentCryptoKey
                                      ;
                                      if (pPVar13 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                        (pPVar13->fields).BGGJBKHNGFG.fields.fakeValueActive =
                                             (pPVar10->fields).BGGJBKHNGFG.fields.fakeValueActive;
                                        (pPVar13->fields).BGGJBKHNGFG.fields.inited = bVar1;
                                        *(undefined6 *)
                                         &(pPVar13->fields).BGGJBKHNGFG.fields.field_0x1a = uVar7;
                                        (pPVar13->fields).BGGJBKHNGFG.fields.fakeValue = iVar16;
                                        (pPVar13->fields).BGGJBKHNGFG.fields.hiddenValue = iVar18;
                                        (pPVar13->fields).BGGJBKHNGFG.fields.currentCryptoKey =
                                             iVar17;
                                        pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                        if (pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                          pPVar13 = pPVar14->JDHAHDALAOA;
                                          bVar1 = (pPVar10->fields).HBMNICBOJFL.fields.inited;
                                          uVar7 = *(undefined6 *)
                                                   &(pPVar10->fields).HBMNICBOJFL.fields.field_0x1a;
                                          iVar16 = (pPVar10->fields).HBMNICBOJFL.fields.fakeValue;
                                          iVar18 = (pPVar10->fields).HBMNICBOJFL.fields.hiddenValue;
                                          iVar17 = (pPVar10->fields).HBMNICBOJFL.fields.
                                                   currentCryptoKey;
                                          if (pPVar13 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                            (pPVar13->fields).HBMNICBOJFL.fields.fakeValueActive =
                                                 (pPVar10->fields).HBMNICBOJFL.fields.
                                                 fakeValueActive;
                                            (pPVar13->fields).HBMNICBOJFL.fields.inited = bVar1;
                                            *(undefined6 *)
                                             &(pPVar13->fields).HBMNICBOJFL.fields.field_0x1a =
                                                 uVar7;
                                            (pPVar13->fields).HBMNICBOJFL.fields.fakeValue = iVar16;
                                            (pPVar13->fields).HBMNICBOJFL.fields.hiddenValue =
                                                 iVar18;
                                            (pPVar13->fields).HBMNICBOJFL.fields.currentCryptoKey =
                                                 iVar17;
                                            pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                            if (pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                              pPVar13 = pPVar14->JDHAHDALAOA;
                                              bVar1 = (pPVar10->fields).HDGEOJGHEOE.fields.inited;
                                              uVar7 = *(undefined6 *)
                                                       &(pPVar10->fields).HDGEOJGHEOE.fields.
                                                        field_0x1a;
                                              iVar16 = (pPVar10->fields).HDGEOJGHEOE.fields.
                                                       fakeValue;
                                              iVar18 = (pPVar10->fields).HDGEOJGHEOE.fields.
                                                       hiddenValue;
                                              iVar17 = (pPVar10->fields).HDGEOJGHEOE.fields.
                                                       currentCryptoKey;
                                              if (pPVar13 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                (pPVar13->fields).HDGEOJGHEOE.fields.fakeValueActive
                                                     = (pPVar10->fields).HDGEOJGHEOE.fields.
                                                       fakeValueActive;
                                                (pPVar13->fields).HDGEOJGHEOE.fields.inited = bVar1;
                                                *(undefined6 *)
                                                 &(pPVar13->fields).HDGEOJGHEOE.fields.field_0x1a =
                                                     uVar7;
                                                (pPVar13->fields).HDGEOJGHEOE.fields.fakeValue =
                                                     iVar16;
                                                (pPVar13->fields).HDGEOJGHEOE.fields.hiddenValue =
                                                     iVar18;
                                                (pPVar13->fields).HDGEOJGHEOE.fields.
                                                currentCryptoKey = iVar17;
                                                pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                                if (pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                  pPVar13 = pPVar14->JDHAHDALAOA;
                                                  bVar1 = (pPVar10->fields).NOPGBJNLFHM.fields.
                                                          fakeValueActive;
                                                  bVar2 = (pPVar10->fields).NOPGBJNLFHM.fields.
                                                          inited;
                                                  uVar8 = *(undefined2 *)
                                                           &(pPVar10->fields).NOPGBJNLFHM.fields.
                                                            field_0xe;
                                                  iVar6 = (pPVar10->fields).NOPGBJNLFHM.fields.
                                                          currentCryptoKey;
                                                  iVar9 = (pPVar10->fields).NOPGBJNLFHM.fields.
                                                          hiddenValue;
                                                  if (pPVar13 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                    (pPVar13->fields).NOPGBJNLFHM.fields.fakeValue =
                                                         (pPVar10->fields).NOPGBJNLFHM.fields.
                                                         fakeValue;
                                                    (pPVar13->fields).NOPGBJNLFHM.fields.
                                                    fakeValueActive = bVar1;
                                                    (pPVar13->fields).NOPGBJNLFHM.fields.inited =
                                                         bVar2;
                                                    *(undefined2 *)
                                                     &(pPVar13->fields).NOPGBJNLFHM.fields.field_0xe
                                                         = uVar8;
                                                    (pPVar13->fields).NOPGBJNLFHM.fields.
                                                    currentCryptoKey = iVar6;
                                                    (pPVar13->fields).NOPGBJNLFHM.fields.hiddenValue
                                                         = iVar9;
                                                    pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                                    if (pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)
                                                    {
                                                      pPVar13 = pPVar14->JDHAHDALAOA;
                                                      bVar1 = (pPVar10->fields).BIKFMGALAEC.fields.
                                                              fakeValueActive;
                                                      bVar2 = (pPVar10->fields).BIKFMGALAEC.fields.
                                                              inited;
                                                      uVar8 = *(undefined2 *)
                                                               &(pPVar10->fields).BIKFMGALAEC.fields
                                                                .field_0xe;
                                                      iVar6 = (pPVar10->fields).BIKFMGALAEC.fields.
                                                              currentCryptoKey;
                                                      iVar9 = (pPVar10->fields).BIKFMGALAEC.fields.
                                                              hiddenValue;
                                                      if (pPVar13 !=
                                                          (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                        (pPVar13->fields).BIKFMGALAEC.fields.
                                                        fakeValue = (pPVar10->fields).BIKFMGALAEC.
                                                                    fields.fakeValue;
                                                        (pPVar13->fields).BIKFMGALAEC.fields.
                                                        fakeValueActive = bVar1;
                                                        (pPVar13->fields).BIKFMGALAEC.fields.inited
                                                             = bVar2;
                                                        *(undefined2 *)
                                                         &(pPVar13->fields).BIKFMGALAEC.fields.
                                                          field_0xe = uVar8;
                                                        (pPVar13->fields).BIKFMGALAEC.fields.
                                                        currentCryptoKey = iVar6;
                                                        (pPVar13->fields).BIKFMGALAEC.fields.
                                                        hiddenValue = iVar9;
                                                        pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                                        if (pPVar10 !=
                                                            (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                          pPVar13 = pPVar14->JDHAHDALAOA;
                                                          bVar1 = (pPVar10->fields).NPADKALJCPB.
                                                                  fields.inited;
                                                          uVar7 = *(undefined6 *)
                                                                   &(pPVar10->fields).NPADKALJCPB.
                                                                    fields.field_0x1a;
                                                          iVar16 = (pPVar10->fields).NPADKALJCPB.
                                                                   fields.fakeValue;
                                                          iVar18 = (pPVar10->fields).NPADKALJCPB.
                                                                   fields.hiddenValue;
                                                          iVar17 = (pPVar10->fields).NPADKALJCPB.
                                                                   fields.currentCryptoKey;
                                                          if (pPVar13 !=
                                                              (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                            (pPVar13->fields).NPADKALJCPB.fields.
                                                            fakeValueActive =
                                                                 (pPVar10->fields).NPADKALJCPB.
                                                                 fields.fakeValueActive;
                                                            (pPVar13->fields).NPADKALJCPB.fields.
                                                            inited = bVar1;
                                                            *(undefined6 *)
                                                             &(pPVar13->fields).NPADKALJCPB.fields.
                                                              field_0x1a = uVar7;
                                                            (pPVar13->fields).NPADKALJCPB.fields.
                                                            fakeValue = iVar16;
                                                            (pPVar13->fields).NPADKALJCPB.fields.
                                                            hiddenValue = iVar18;
                                                            (pPVar13->fields).NPADKALJCPB.fields.
                                                            currentCryptoKey = iVar17;
                                                            pPVar10 = (IBKIPBJJCPG->fields).
                                                                      JDHAHDALAOA;
                                                            if (pPVar10 !=
                                                                (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                                                              pPVar13 = pPVar14->JDHAHDALAOA;
                                                              bVar1 = (pPVar10->fields).AEIJFFBOBCP.
                                                                      fields.fakeValueActive;
                                                              bVar2 = (pPVar10->fields).AEIJFFBOBCP.
                                                                      fields.inited;
                                                              uVar8 = *(undefined2 *)
                                                                       &(pPVar10->fields).
                                                                        AEIJFFBOBCP.fields.field_0xe
                                                              ;
                                                              iVar6 = (pPVar10->fields).AEIJFFBOBCP.
                                                                      fields.currentCryptoKey;
                                                              iVar9 = (pPVar10->fields).AEIJFFBOBCP.
                                                                      fields.hiddenValue;
                                                              if (pPVar13 !=
                                                                  (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)
                                                              {
                                                                (pPVar13->fields).AEIJFFBOBCP.fields
                                                                .fakeValue = (pPVar10->fields).
                                                                             AEIJFFBOBCP.fields.
                                                                             fakeValue;
                                                                (pPVar13->fields).AEIJFFBOBCP.fields
                                                                .fakeValueActive = bVar1;
                                                                (pPVar13->fields).AEIJFFBOBCP.fields
                                                                .inited = bVar2;
                                                                *(undefined2 *)
                                                                 &(pPVar13->fields).AEIJFFBOBCP.
                                                                  fields.field_0xe = uVar8;
                                                                (pPVar13->fields).AEIJFFBOBCP.fields
                                                                .currentCryptoKey = iVar6;
                                                                (pPVar13->fields).AEIJFFBOBCP.fields
                                                                .hiddenValue = iVar9;
                                                                pPVar10 = (IBKIPBJJCPG->fields).
                                                                          JDHAHDALAOA;
                                                                if ((pPVar10 !=
                                                                     (PONNKDFAMFM_IBOIJJKIIAJ_o *)
                                                                     0x0) && (pPVar14->JDHAHDALAOA
                                                                              != (
                                                  PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)) {
                                                    (pPVar14->JDHAHDALAOA->fields).KKEMMFEJHNP =
                                                         (pPVar10->fields).KKEMMFEJHNP;
                                                    thunk_FUN_01c20e04();
                                                    pPVar10 = (IBKIPBJJCPG->fields).JDHAHDALAOA;
                                                    if ((pPVar10 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0
                                                        ) && (pPVar14->JDHAHDALAOA !=
                                                              (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)) {
                                                      (pPVar14->JDHAHDALAOA->fields).GCJOPIMLOGJ =
                                                           (pPVar10->fields).GCJOPIMLOGJ;
                                                      thunk_FUN_01c20e04();
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

