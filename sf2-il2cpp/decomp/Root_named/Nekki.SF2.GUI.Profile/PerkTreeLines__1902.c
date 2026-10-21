// TypeDefIndex 1902
// Namespace: Nekki.SF2.GUI.Profile
// public class PerkTreeLines : MonoBehaviour
// Fields:
//   private GameObject _TopLine; // 0x20
//   private GameObject _BottomLine; // 0x28
//   private GameObject _LinesForTwoPerks; // 0x30

// ===== public void Refresh(bool BJPGNOPNHHJ, bool HDDKEAABJOB, bool ICCGIMJNNKM)  [RVA 0x32579C0]
// Nekki.SF2.GUI.Profile.PerkTreeLines$$Refresh @ RVA 0x32579C0

void Nekki_SF2_GUI_Profile_PerkTreeLines__Refresh
               (Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this,bool BJPGNOPNHHJ,bool HDDKEAABJOB,
               bool ICCGIMJNNKM,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = (__this->fields)._TopLine;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,(bool)(~BJPGNOPNHHJ & 1),(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._BottomLine;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,(bool)(~HDDKEAABJOB & 1),(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._LinesForTwoPerks;
      if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,ICCGIMJNNKM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3257A54]
// Nekki.SF2.GUI.Profile.PerkTreeLines$$.ctor @ RVA 0x3257A54

void Nekki_SF2_GUI_Profile_PerkTreeLines___ctor
               (Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

