// Nekki.Utils.RaidBetaLogger$$EFIKJMNBLOI @ RVA 0x359CCEC

bool Nekki_Utils_RaidBetaLogger__EFIKJMNBLOI
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  long lVar3;
  System_String_o *CJNHFNHJHPE;
  uint uVar4;
  Nekki_Utils_RaidBetaLogger_StaticFields *pNVar5;
  long lVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = method;
  auVar12._0_8_ = __this;
  if ((DAT_04568dd7 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    auVar12 = FUN_01bab630(&float___TypeInfo);
    DAT_04568dd7 = 1;
  }
                    /* try { // try from 0369cd34 to 0379cd3b has its CatchHandler @ 0369cda4 */
  bVar1 = Nekki_Utils_RaidBetaLogger__HOBENBNLFNK(auVar12._0_8_,auVar12._8_8_);
  if (!bVar1) {
    if ((__this->fields).ICAEKHCKLCN < 1) {
                    /* try { // try from 0369cdf0 to 0379cdf7 has its CatchHandler @ 0369ce0c */
      if ((__this->fields).GNHCAHAGKAO < 1) {
        if ((__this->fields).EPHJKJKOHCC < 1) {
          if ((__this->fields).IEEEIBLEDNC < 1) {
            if ((__this->fields).NHEHAJAKGAD < 1) {
              return false;
            }
            if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar10 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->
                     ReleaseSendLogChance_AdditionalLog;
          }
          else {
            if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar10 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->
                     ReleaseSendLogChance_DuplicatedItems;
          }
        }
        else {
          if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar10 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Exc;
        }
      }
      else {
                    /* try { // try from 0369cdf8 to 0379ce03 has its CatchHandler @ 0369cc48 */
                    /* try { // try from 0369ce04 to 0379ce0b has its CatchHandler @ 0369ce0c */
        if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369cdf0 with catch @ 0369ce0c
                       catch(type#2 @ 00000000) { ... } // from try @ 0369ce04 with catch @ 0369ce0c
                        */
          thunk_FUN_01ba7564();
                    /* try { // try from 0369ce10 to 0379cff3 has its CatchHandler @ 0369ce10
                       catch() { ... } // from try @ 0369ce10 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d0c4 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d0e8 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d254 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d2d4 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d320 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d370 with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d38c with catch @ 0369ce10
                       catch() { ... } // from try @ 0369d3c0 with catch @ 0369ce10 */
        }
        fVar10 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_NuR;
        fVar11 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Exc;
        if (fVar10 <= fVar11) {
          fVar10 = fVar11;
        }
      }
    }
    else {
                    /* try { // try from 0369cd4c to 0379cd57 has its CatchHandler @ 0369cd9c */
                    /* try { // try from 0369cd58 to 0379cd93 has its CatchHandler @ 0369cc48 */
      lVar3 = FUN_01bab718(float___TypeInfo,3);
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar7 = (uint)*(ulong *)(lVar3 + 0x18);
      if (uVar7 == 0) {
LAB_0369cf7c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pNVar5 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields;
                    /* try { // try from 0369cd94 to 0379cd97 has its CatchHandler @ 0369cda0 */
      fVar11 = pNVar5->ReleaseSendLogChance_Hack;
                    /* try { // try from 0369cd98 to 0379cdbb has its CatchHandler @ 0369cc48 */
      *(float *)(lVar3 + 0x20) = fVar11;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369cd4c with catch @ 0369cd9c
                        */
      if (uVar7 == 1) goto LAB_0369cf7c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369cd94 with catch @ 0369cda0
                        */
      fVar9 = pNVar5->ReleaseSendLogChance_NuR;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369cd34 with catch @ 0369cda4
                        */
      *(float *)(lVar3 + 0x24) = fVar9;
      if (uVar7 < 3) goto LAB_0369cf7c;
      *(float *)(lVar3 + 0x28) = pNVar5->ReleaseSendLogChance_Exc;
      fVar10 = fVar11;
      if (1 < (int)uVar7) {
                    /* try { // try from 0369cdbc to 0379cdbf has its CatchHandler @ 0369cde8 */
                    /* try { // try from 0369cdc0 to 0379cdef has its CatchHandler @ 0369cc48 */
        fVar10 = fVar9;
        if (fVar9 <= fVar11) {
          fVar10 = fVar11;
        }
        lVar6 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 2;
        if (lVar6 != 0) {
          pfVar8 = (float *)(lVar3 + 0x28);
          do {
            fVar11 = *pfVar8;
            if (*pfVar8 <= fVar10) {
              fVar11 = fVar10;
            }
            fVar10 = fVar11;
            lVar6 = lVar6 + -1;
            pfVar8 = pfVar8 + 1;
          } while (lVar6 != 0);
        }
      }
    }
    if (1e-05 < fVar10) {
      if (fVar10 < 0.95) {
        CJNHFNHJHPE = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar1) {
          uVar2 = PCOEHCPGBBG__GEAOHBLPINE(CJNHFNHJHPE,false,(MethodInfo *)0x0);
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Math_TypeInfo);
          }
          uVar4 = (uint)((1.0 / ABS(fVar10)) * 10000.0);
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = uVar2 / uVar4;
          }
          return uVar2 - uVar7 * uVar4 < 0x2711;
        }
      }
      return true;
    }
  }
  return false;
}

