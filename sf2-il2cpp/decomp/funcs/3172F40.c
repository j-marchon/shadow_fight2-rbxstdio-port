// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Current @ RVA 0x3172F40

Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *
Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar3;
  
                    /* try { // try from 03272f40 to 03372f47 has its CatchHandler @ 032730dc */
                    /* try { // try from 03272f54 to 03372f5f has its CatchHandler @ 032730d4 */
  if ((DAT_0456693b & 1) == 0) {
                    /* try { // try from 03272f6c to 03372f6f has its CatchHandler @ 032730b8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidPlayerInfoRoot>__);
                    /* try { // try from 03272f74 to 03372f7b has its CatchHandler @ 032730d8 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03272f88 to 03372f93 has its CatchHandler @ 032730d0 */
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
                    /* try { // try from 03272f9c to 03372fa7 has its CatchHandler @ 032730b4 */
    FUN_01bab630(&StringLiteral_10413);
    DAT_0456693b = 1;
  }
                    /* try { // try from 03272fac to 03372fb7 has its CatchHandler @ 032730b0 */
  pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03272fc0 to 03372fcb has its CatchHandler @ 032730bc */
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_0327306c:
    return Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  }
                    /* try { // try from 03272fd8 to 03372fe3 has its CatchHandler @ 032730a4 */
                    /* try { // try from 03272fe4 to 0337308f has its CatchHandler @ 03272e1c */
  pUVar2 = UnityEngine_Resources__Load(StringLiteral_10413,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    pNVar3 = (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<RaidPlayerInfoRoot>__);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH = pNVar3;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields,pNVar3);
    pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
    if (pNVar3 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ(pNVar3,method_00);
      goto LAB_0327306c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

