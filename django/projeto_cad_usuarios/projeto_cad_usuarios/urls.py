
from django.urls import path

from app_cad_usuarios import views

#rota, view  responsavel, nome de referencia

urlpatterns = [
    path('', views.home, name='home'),
    
    #ususarios.com/usuarios
    path('usuarios/', views.usuarios, name='listagem_usuarios')

]
