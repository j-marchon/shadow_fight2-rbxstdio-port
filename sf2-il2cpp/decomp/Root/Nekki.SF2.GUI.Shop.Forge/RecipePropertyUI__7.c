// TypeDefIndex 7
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class RecipePropertyUI : MonoBehaviour
// Fields:
//   private ResolutionImage _Icon; // 0x20
//   private LabelAlias _ValueRangeLabel; // 0x28
//   private PerkProgressBar _ProgressBar; // 0x30
//   private Button _PropertyButton; // 0x38
//   private float PDOCIKAGKFH; // 0x40
//   private float MNFJGKCJFEH; // 0x44
//   private bool NHBCGHJAJJI; // 0x48

// ===== public Button get_PropertyButton()  [RVA 0x2FEF058]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$get_PropertyButton @ RVA 0x2FEF058

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__get_PropertyButton
          (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._PropertyButton;
}


// ===== public void Refresh(string HHHAAGDPOKH, float MMMPFDKCLIP, float KJIKHPEEMFC, bool OAEJFDBIHPO = True)  [RVA 0x2FEF060]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$Refresh @ RVA 0x2FEF060

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,System_String_o *HHHAAGDPOKH,
               float MMMPFDKCLIP,float KJIKHPEEMFC,bool OAEJFDBIHPO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float local_38;
  float local_34;
  
  if ((DAT_04565a55 & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_22293/*"{0} - {1}"*/);
    DAT_04565a55 = 1;
  }
  __this_00 = (__this->fields)._Icon;
  (__this->fields).PDOCIKAGKFH = MMMPFDKCLIP;
  (__this->fields).MNFJGKCJFEH = KJIKHPEEMFC;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,HHHAAGDPOKH,(MethodInfo *)0x0);
    local_34 = (__this->fields).PDOCIKAGKFH;
    pNVar2 = (__this->fields)._ValueRangeLabel;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
    local_38 = (__this->fields).MNFJGKCJFEH;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
    pSVar1 = System_String__Format(StringLiteral_22293/*"{0} - {1}"*/,arg0,arg1,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields)._ValueRangeLabel;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,OAEJFDBIHPO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x2FEF17C]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$Awake @ RVA 0x2FEF17C

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__Awake
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void set_Value(float CJNHFNHJHPE)  [RVA 0x2FEF180]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$set_Value @ RVA 0x2FEF180

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_Value
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *pNVar1;
  
  pNVar1 = (__this->fields)._ProgressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030ef198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._7_set_Value.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._7_set_Value.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_ValuePercentage()  [RVA 0x2FEF1A0]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$get_ValuePercentage @ RVA 0x2FEF1A0

float Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__get_ValuePercentage
                (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *pNVar1;
  
  pNVar1 = (__this->fields)._ProgressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    return (pNVar1->fields).super.super.JGFKHMMNJBA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ValuePercentage(float CJNHFNHJHPE)  [RVA 0x2FEF1BC]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$set_ValuePercentage @ RVA 0x2FEF1BC

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_ValuePercentage
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this_00;
  
  __this_00 = (__this->fields)._ProgressBar;
  if (__this_00 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    Nekki_SF2_GUI_Shop_PerkProgressBar__set_ValuePercentage(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_BarScale()  [RVA 0x2FEF1D8]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$get_BarScale @ RVA 0x2FEF1D8

System_String_o *
Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__get_BarScale
          (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *pNVar1;
  
  pNVar1 = (__this->fields)._ProgressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    return (pNVar1->fields).HDOFPOOANDI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_BarScale(string CJNHFNHJHPE)  [RVA 0x2FEF1F4]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$set_BarScale @ RVA 0x2FEF1F4

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_BarScale
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this_00;
  
  __this_00 = (__this->fields)._ProgressBar;
  if (__this_00 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    Nekki_SF2_GUI_Shop_PerkProgressBar__set_BarScale(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FEF210]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$.ctor @ RVA 0x2FEF210

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

