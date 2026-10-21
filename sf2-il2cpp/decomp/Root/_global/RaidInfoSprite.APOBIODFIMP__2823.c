// TypeDefIndex 2823
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidInfoSprite.APOBIODFIMP
// Fields:
//   public RaidInfoSprite <>4__this; // 0x10
//   public int shakesCount; // 0x18
//   public Vector3 originPos; // 0x1C
//   public DOGetter<Vector3> <>9__2; // 0x28
//   public DOSetter<Vector3> <>9__3; // 0x30
//   public DOSetter<Vector3> <>9__5; // 0x38

// ===== internal void FJKJNBBNBMG(Vector3 newPos)  [RVA 0x3429484]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$FJKJNBBNBMG @ RVA 0x3429484

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__FJKJNBBNBMG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,
               UnityEngine_Vector3_o newPos,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._icon, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)__this_01,newPos,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34294DC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$.ctor @ RVA 0x34294DC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal Vector3 JJEECCDOIFG()  [RVA 0x34294E4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$JJEECCDOIFG @ RVA 0x34294E4

UnityEngine_Vector3_o
Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__JJEECCDOIFG
          (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).originPos.fields;
}


// ===== internal void CKFBDHBKOAA()  [RVA 0x34294F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$CKFBDHBKOAA @ RVA 0x34294F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__CKFBDHBKOAA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HNKCOMGNDHP
              (__this_00,(UnityEngine_Vector3_o)(__this->fields).originPos.fields,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void MNNMJOJHGNO()  [RVA 0x3429518]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$MNNMJOJHGNO @ RVA 0x3429518

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__MNNMJOJHGNO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__AGKAANKJCPM
              (__this_00,(__this->fields).shakesCount,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void DJJKJAOMDHK(Vector3 newPos)  [RVA 0x342953C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$DJJKJAOMDHK @ RVA 0x342953C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__DJJKJAOMDHK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,
               UnityEngine_Vector3_o newPos,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._icon, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)__this_01,newPos,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

