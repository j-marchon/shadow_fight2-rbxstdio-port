// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_CenterPosition @ RVA 0x31901E8

UnityEngine_Vector3_o
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_CenterPosition
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float fVar4;
  
                    /* try { // try from 032901e8 to 033901ef has its CatchHandler @ 03290340 */
                    /* try { // try from 032901f0 to 03390273 has its CatchHandler @ 03290100 */
  if ((DAT_04566a3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a3d = 1;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.y;
    pNVar3 = (__this->fields)._image;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 03290274 to 0339027b has its CatchHandler @ 0329034c */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_032902b0;
      UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
    }
                    /* try { // try from 03290290 to 03390297 has its CatchHandler @ 03290348 */
    UVar5.fields.y = fVar4;
                    /* try { // try from 03290298 to 033902d7 has its CatchHandler @ 03290100 */
    return (UnityEngine_Vector3_o)UVar5.fields;
  }
LAB_032902b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

