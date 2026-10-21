// Nekki.SF2.GUI.Common.Hints.HintUI$$LDIOMNGBBHD @ RVA 0x32FC8F4

void Nekki_SF2_GUI_Common_Hints_HintUI__LDIOMNGBBHD
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,
               Nekki_SF2_GUI_ResolutionImage_array *EFOOOIEHBKP,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (EFOOOIEHBKP == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)EFOOOIEHBKP->max_length) {
    uVar3 = 0;
    uVar2 = EFOOOIEHBKP->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,EFOOOIEHBKP->m_Items[uVar3],method);
      uVar1 = (uint)EFOOOIEHBKP->max_length;
      uVar2 = (ulong)uVar1;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return;
}

