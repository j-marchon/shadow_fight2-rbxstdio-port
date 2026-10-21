// Nekki.Utils.RaidBetaLogger$$ShowUIRoot @ RVA 0x359F308

void Nekki_Utils_RaidBetaLogger__ShowUIRoot
               (Nekki_Utils_RaidBetaLogger_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._rootUI;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

