// Nekki.SF2.GUI.Menu.MainMenu$$NBDCHKLIHEJ @ RVA 0x356E9F4

void Nekki_SF2_GUI_Menu_MainMenu__NBDCHKLIHEJ
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 0366ea0c to 0376ea13 has its CatchHandler @ 03672d44 */
  if ((DAT_04568c46 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_FCAANJBONKL__);
                    /* try { // try from 0366ea24 to 0376ea2b has its CatchHandler @ 03672d40 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
                    /* try { // try from 0366ea38 to 0376ea3f has its CatchHandler @ 03672d3c */
    DAT_04568c46 = 1;
  }
  pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if ((pUVar2 != (UnityEngine_Component_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366ea50 to 0376ea57 has its CatchHandler @ 03672d38 */
                    /* try { // try from 0366ea58 to 0376ea67 has its CatchHandler @ 03672d34 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
    if (pUVar2 != (UnityEngine_Component_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar1 = &(__this->fields)._MaterialsClosedPosition;
      if (BBLFHGGEMNI) {
        endValue.fields.z = 0.0;
        endValue.fields._0_8_ = pUVar1->fields;
                    /* try { // try from 0366ea80 to 0376ea83 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366ea84 to 0376eaa7 has its CatchHandler @ 03673278 */
        t = DG_Tweening_ShortcutExtensions__DOLocalMove
                      (__this_01,endValue,(__this->fields)._MaterialsOpenedPosition.fields.x,false,
                       (MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0366eab4 to 0376eabb has its CatchHandler @ 03673134 */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 0366eacc to 0376ead3 has its CatchHandler @ 03673130 */
        DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                  ((Il2CppObject *)t,action,
                   Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                  );
        return;
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        value.fields.z = 0.0;
        value.fields._0_8_ = pUVar1->fields;
                    /* try { // try from 0366eae0 to 0376eae7 has its CatchHandler @ 0367312c */
        UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Menu_MainMenu__FCAANJBONKL(__this_02,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366eaf8 to 0376eaff has its CatchHandler @ 03673128 */
  FUN_01bab8c8();
}

