// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$POLDKNNNAIN @ RVA 0x3428BAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__POLDKNNNAIN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,float AINBPAEDKKN,
               System_Single_array *LLPEAMNMGML,MethodInfo *method)

{
  uint uVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  ulong uVar2;
  DG_Tweening_Sequence_o *s;
  ulong uVar3;
  float endValue;
  
  if ((DAT_0456812b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_DKGKMOKJLHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IJKMDJGGDKK__);
    DAT_0456812b = 1;
  }
  if (LLPEAMNMGML != (System_Single_array *)0x0) {
    if (0 < (int)LLPEAMNMGML->max_length) {
      uVar3 = 0;
      uVar2 = LLPEAMNMGML->max_length & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        endValue = LLPEAMNMGML->m_Items[uVar3];
        s = (__this->fields).NEBFELNKBFG;
        getter = (DG_Tweening_Core_DOGetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
        DG_Tweening_Core_DOGetter<float>___ctor();
        setter = (DG_Tweening_Core_DOSetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
        DG_Tweening_Core_DOSetter<float>___ctor();
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,endValue,AINBPAEDKKN,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        uVar1 = (uint)LLPEAMNMGML->max_length;
        uVar2 = (ulong)uVar1;
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

