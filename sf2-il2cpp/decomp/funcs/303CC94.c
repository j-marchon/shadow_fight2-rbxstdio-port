// Nekki.SF2.GUI.TextButton$$DoStateTransition @ RVA 0x303CC94

void Nekki_SF2_GUI_TextButton__DoStateTransition
               (Nekki_SF2_GUI_TextButton_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,
               MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  SFButton__DoStateTransition((SFButton_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
                    /* try { // try from 0313ccb0 to 0323ccb7 has its CatchHandler @ 0313cf1c */
  if (HJEBKCDDBAB == 2) {
    pUVar4 = &(__this->fields)._PressedTextColor;
    pUVar1 = &(__this->fields)._PressedTextColor;
    pUVar2 = &(__this->fields)._PressedTextColor;
                    /* try { // try from 0313ccc4 to 0323cccb has its CatchHandler @ 0313cf34 */
    pUVar3 = &(__this->fields)._PressedTextColor;
  }
  else {
    pUVar4 = &(__this->fields)._NormalTextColor;
    pUVar1 = &(__this->fields)._NormalTextColor;
    pUVar2 = &(__this->fields)._NormalTextColor;
    pUVar3 = &(__this->fields)._NormalTextColor;
  }
                    /* try { // try from 0313ccdc to 0323ccff has its CatchHandler @ 0313cf3c */
  CJNHFNHJHPE.fields.b = (pUVar2->fields).b;
  CJNHFNHJHPE.fields.g = (pUVar1->fields).g;
  CJNHFNHJHPE.fields.r = (pUVar4->fields).r;
  CJNHFNHJHPE.fields.a = (pUVar3->fields).a;
  Nekki_SF2_GUI_TextButton__set_TextColor(__this,CJNHFNHJHPE,method_00);
  return;
}

