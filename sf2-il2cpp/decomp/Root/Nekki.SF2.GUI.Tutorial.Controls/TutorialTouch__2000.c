// TypeDefIndex 2000
// Namespace: Nekki.SF2.GUI.Tutorial.Controls
// public abstract class TutorialTouch : TutorialControl
// Fields:
//   private const int ADEEKIMMNOI = 0;
//   private bool MEPJHIOAEFD; // 0x21

// ===== protected virtual void CGMNBHOHEPO()  [RVA 0x3293EFC]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$CGMNBHOHEPO @ RVA 0x3293EFC

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__CGMNBHOHEPO
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void NEDBKBEDDID()  [RVA 0x3293F00]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$NEDBKBEDDID @ RVA 0x3293F00

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__NEDBKBEDDID
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).super.field_0x11 = 0;
                    /* WARNING: Could not recover jumptable at 0x03393f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._4_CGMNBHOHEPO.methodPtr)(__this,(pNVar1->vtable)._4_CGMNBHOHEPO.method);
  return;
}


// ===== protected virtual void IMMFEBFFAEA(Vector2 EEGKJKNENDE)  [RVA 0x3293F10]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$IMMFEBFFAEA @ RVA 0x3293F10

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__IMMFEBFFAEA
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  return;
}


// ===== protected void .ctor()  [RVA 0x3293F14]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$.ctor @ RVA 0x3293F14

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch___ctor
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialControl___ctor
            ((Nekki_SF2_GUI_Tutorial_TutorialControl_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void Update()  [RVA 0x3293F1C]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$Update @ RVA 0x3293F1C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__Update
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar3;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_c *pNVar4;
  
                    /* try { // try from 03393f20 to 03493f2f has its CatchHandler @ 0339400c */
  pNVar3 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar3 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03393f40 to 03493f43 has its CatchHandler @ 03394000 */
  if (((pNVar3->fields).DBNNMLAONOF == false) || ((__this->fields).super.IsActive == false)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ec0 with catch @ 0339401c
                        */
    return;
  }
                    /* try { // try from 03393f44 to 03493f53 has its CatchHandler @ 03394008 */
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = UnityEngine_Input__GetMouseButtonUp(0,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  }
                    /* try { // try from 03393f94 to 03493faf has its CatchHandler @ 03394004 */
  if (((__this->fields).super.field_0x11 != '\0') &&
     ((iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), bVar1 == false || (1 < iVar2)))
     ) {
    pNVar4 = __this->klass;
    (__this->fields).super.field_0x11 = 0;
                    /* WARNING: Could not recover jumptable at 0x03393fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03393fec to 03493fef has its CatchHandler @ 03394014 */
    (*(pNVar4->vtable)._4_CGMNBHOHEPO.methodPtr)(__this,(pNVar4->vtable)._4_CGMNBHOHEPO.method);
    return;
  }
  bVar1 = HPHIGFJMKAC__KCLHDFJFHAE(0,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
                    /* try { // try from 03393fb8 to 03493fbf has its CatchHandler @ 03393ffc */
    if ((__this->fields).super.field_0x11 == '\0') {
      return;
    }
                    /* try { // try from 03393fc0 to 03493feb has its CatchHandler @ 03393db0 */
    bVar1 = HPHIGFJMKAC__OCAKHFGDEBH(0,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
                    /* try { // try from 03393ff0 to 03493ff7 has its CatchHandler @ 03394010 */
      if ((__this->fields).super.field_0x11 == '\0') {
        return;
      }
                    /* try { // try from 03393ff8 to 03494033 has its CatchHandler @ 03393db0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393fb8 with catch @ 03393ffc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f40 with catch @ 03394000
                        */
      bVar1 = HPHIGFJMKAC__JCHBNNNJOCL(0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f94 with catch @ 03394004
                        */
      if (!bVar1) {
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f44 with catch @ 03394008
                        */
      iVar2 = 2;
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ff0 with catch @ 03394010
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393fec with catch @ 03394014
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ed4 with catch @ 03394018
                        */
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__IACJCFBKLNL(__this,iVar2,in_x2);
  return;
}


// ===== protected virtual void NKGGEIDHNJA(Vector2 EEGKJKNENDE)  [RVA 0x3294160]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$NKGGEIDHNJA @ RVA 0x3294160

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__NKGGEIDHNJA
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  return;
}


// ===== protected virtual void NJHDNHBJPDH(Vector2 EEGKJKNENDE)  [RVA 0x3294164]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$NJHDNHBJPDH @ RVA 0x3294164

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__NJHDNHBJPDH
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  return;
}


// ===== private void IACJCFBKLNL(TutorialTouch.KMMEKGHAKHI HJEBKCDDBAB)  [RVA 0x329402C]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$IACJCFBKLNL @ RVA 0x329402C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__IACJCFBKLNL
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,int32_t HJEBKCDDBAB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *t1;
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_c *pNVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o worldPos;
  undefined4 extraout_var;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_d1 >> 0x20);
                    /* try { // try from 03394034 to 03494037 has its CatchHandler @ 03394058 */
                    /* try { // try from 03394038 to 0349405f has its CatchHandler @ 03393db0 */
  if ((DAT_0456734f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
                    /* catch() { ... } // from try @ 03394034 with catch @ 03394058 */
    DAT_0456734f = 1;
  }
                    /* try { // try from 03394060 to 03494067 has its CatchHandler @ 0339407c */
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  uVar4 = CONCAT44(uVar5,UVar6.fields.y);
  uVar3 = CONCAT44(extraout_var,UVar6.fields.x);
                    /* try { // try from 03394068 to 03494073 has its CatchHandler @ 03393db0 */
                    /* try { // try from 03394074 to 0349407b has its CatchHandler @ 0339407c */
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03394060 with catch @ 0339407c
                       catch(type#2 @ 00000000) { ... } // from try @ 03394074 with catch @ 0339407c
                        */
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    t1 = (UnityEngine_RectTransform_o *)
         UnityEngine_GameObject__GetComponent<object>
                   (__this_00,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    worldPos.fields.z = 0.0;
    worldPos.fields.x = (float)(int)UVar6.fields._0_8_;
    worldPos.fields.y = (float)(int)(UVar6.fields._0_8_ >> 0x20);
    bVar1 = UnityEngine_TransformExtensions__IsIntersects
                      (t1,worldPos,(UnityEngine_Vector3_array *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (HJEBKCDDBAB == 2) {
                    /* WARNING: Could not recover jumptable at 0x03394158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._6_NKGGEIDHNJA.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._6_NKGGEIDHNJA.method);
        return;
      }
      if (HJEBKCDDBAB == 1) {
        (*(__this->klass->vtable)._7_NJHDNHBJPDH.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._7_NJHDNHBJPDH.method);
        (__this->fields).super.field_0x11 = 0;
      }
      else if (HJEBKCDDBAB == 0) {
        (*(__this->klass->vtable)._5_IMMFEBFFAEA.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._5_IMMFEBFFAEA.method);
        (__this->fields).super.field_0x11 = 1;
      }
    }
    else if (HJEBKCDDBAB == 2) {
      pNVar2 = __this->klass;
      (__this->fields).super.field_0x11 = 0;
                    /* WARNING: Could not recover jumptable at 0x03394108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->vtable)._4_CGMNBHOHEPO.methodPtr)(__this,(pNVar2->vtable)._4_CGMNBHOHEPO.method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

