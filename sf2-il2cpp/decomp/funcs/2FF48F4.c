// Nekki.SF2.GUI.Scenes.LoaderScreen$$EEJGCKMLOAP @ RVA 0x2FF48F4

void Nekki_SF2_GUI_Scenes_LoaderScreen__EEJGCKMLOAP
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,int32_t OHLKNCPBCBL,
               Nekki_SF2_GUI_LabelAlias_o *EMAPNNFBNKF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565a8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<MGNPHCAAEIO_IEKBEIOCOPO>__);
    FUN_01bab630(&StringLiteral_15858);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565a8c = 1;
  }
  (__this->fields).JNKNDDFEIAO = OHLKNCPBCBL;
  iVar2 = System_Linq_Enumerable__Count<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                     (__this->fields).JPOBFBBGOBC,
                     Method_System_Linq_Enumerable_Count<MGNPHCAAEIO_IEKBEIOCOPO>__);
  pSVar3 = StringLiteral_1;
  if (0 < iVar2) {
    pSVar3 = Nekki_SF2_GUI_Scenes_LoaderScreen__MEJGJEGFCJF(__this,method_00);
    pSVar3 = System_String__Format(StringLiteral_15858,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  if (EMAPNNFBNKF != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(EMAPNNFBNKF,pSVar3,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)EMAPNNFBNKF,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (*(System_String_o **)&(EMAPNNFBNKF->fields)._useLabelLineSpacing,
                       (MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030f4a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(EMAPNNFBNKF->klass->vtable)._37_Rebuild.methodPtr)
                (EMAPNNFBNKF,3,(EMAPNNFBNKF->klass->vtable)._37_Rebuild.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

